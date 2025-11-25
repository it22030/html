import java.awt.*;
import java.awt.event.*;
import java.util.ArrayList;
import java.util.Random;
import javax.swing.*;

public class FlappyBird extends JPanel implements ActionListener, KeyListener {
    boolean chec=true;
    int width = 360;
    int height = 640;

    // Images
    Image backgroundImg;
    Image topPipe;
    Image bottomPipe;
    Image birdImg;

    // Bird properties
    int birdX = width / 8;
    int birdY = height / 2;
    int birdWidth = 34;
    int birdHeight = 24;
    int velocityY = 0;
    int gravity = 1;
    int maxFallSpeed = 10;
    int jumpVelocity = -9;

    // Pipe properties
    int pipeX = width;
    int pipeY = 0;
    int pipeWidth = 64;
    int pipeHeight = 512;
    int velocityX = -4;

    // Game logic
    boolean gameOver = false;
    boolean birdFalling = false; // Tracks if the bird is falling after collision
    double score = 0;
    ArrayList<Pipe> pipes;
    Random rand = new Random();

    // Timers
    Timer gameLoop;
    Timer placePipesTimer;

    // Bird class
    class Bird {
        int x = birdX;
        int y = birdY;
        int width = birdWidth;
        int height = birdHeight;
        Image img;

        Bird(Image img) {
            this.img = img;
        }
    }

    // Pipe class
    class Pipe {
        int x = pipeX;
        int y = pipeY;
        int width = pipeWidth;
        int height = pipeHeight;
        Image img;

        Pipe(Image img) {
            this.img = img;
        }
    }

    Bird bird;

    public FlappyBird() {
        setPreferredSize(new Dimension(width, height));
        setFocusable(true);
        addKeyListener(this);

        // Load images
        backgroundImg = new ImageIcon(getClass().getResource("./flappybirdbg.png")).getImage();
        topPipe = new ImageIcon(getClass().getResource("./toppipe.png")).getImage();
        bottomPipe = new ImageIcon(getClass().getResource("./bottompipe.png")).getImage();
        birdImg = new ImageIcon(getClass().getResource("./flappybird.png")).getImage();

        // Initialize bird and pipes
        bird = new Bird(birdImg);
        pipes = new ArrayList<>();

        // Timer to place pipes
        placePipesTimer = new Timer(1500, e -> placePipes());
        //placePipesTimer.start();

        // Game loop timer
        gameLoop = new Timer(1000 / 60, this);
       // gameLoop.start();
    }

    public boolean collision(Bird a, Pipe b) {
        return a.x < b.x + b.width && a.x + a.width > b.x && a.y < b.y + b.height && a.y + a.height > b.y;
    }

    public void placePipes() {
        int openingSpace = height / 4; // Space between pipes
        int minY = height / 6; // Minimum pipe height from the top
        int maxY = height - openingSpace - minY; // Max height for the top pipe

        int randomPipeY = minY + rand.nextInt(maxY - minY);

        Pipe topPipeObj = new Pipe(topPipe);
        topPipeObj.y = randomPipeY - pipeHeight;
        pipes.add(topPipeObj);

        Pipe bottomPipeObj = new Pipe(bottomPipe);
        bottomPipeObj.y = randomPipeY + openingSpace;
        pipes.add(bottomPipeObj);
    }

    @Override
    public void paintComponent(Graphics g) {
        super.paintComponent(g);
        draw(g);
    }

    public void draw(Graphics g) {
        g.drawImage(backgroundImg, 0, 0, width, height, null);
        g.drawImage(bird.img, bird.x, bird.y, bird.width, bird.height, null);

        for (Pipe pipe : pipes) {
            g.drawImage(pipe.img, pipe.x, pipe.y, pipe.width, pipe.height, null);
        }   g.setColor(Color.WHITE);
            g.setFont( new Font("Arial", Font.BOLD, 20));
            if(chec){
                g.drawString("Enter Backspace key to start",width/6,height/2);chec=true;}
        if (gameOver) {
            g.setFont(new Font("Arial", Font.BOLD, 24));
            g.setColor(Color.WHITE);
            g.drawString("Game Over! Score: " + (int) score, width / 6, height / 2);
            g.drawString("Press Enter to restart", width / 6, height / 2 + 30);

        }
    }

    public void move() {
        // Bird movement
        if (!birdFalling) {
            velocityY += gravity;
            velocityY = Math.min(velocityY, maxFallSpeed);
            bird.y += velocityY;
        } else {
            velocityY = Math.min(velocityY + gravity, maxFallSpeed);
            bird.y += velocityY;
        }

        // Prevent bird from going off the top of the screen
        if (bird.y < 0) {
            bird.y = 0;
            velocityY = 0; // Prevent gravity compounding at the top
        }

        // Pipes movement
        for (int i = 0; i < pipes.size(); i++) {
            Pipe pipe = pipes.get(i);
            pipe.x += velocityX;

            // Check for collision
            if (!birdFalling && collision(bird, pipe)) {
                birdFalling = true;
                velocityX = 0; // Stop pipe movement
            }

            // Remove pipes that move out of the screen
            if (pipe.x + pipe.width < 0) {
                pipes.remove(i);
                i--;
            }
        }

        // Check if bird hits the bottom
        if (bird.y > height) {
            gameOver = true;
        }
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (!gameOver) {
            move();
            repaint();
            score += 0.1; // Increment score over time
        } else {
            // Stop timers when the game is over
            if (placePipesTimer.isRunning()) placePipesTimer.stop();
            if (gameLoop.isRunning()) gameLoop.stop();
        }
    }

    @Override
    public void keyPressed(KeyEvent e) {
        if (e.getKeyCode() == KeyEvent.VK_SPACE && !birdFalling && !gameOver) {
            velocityY = jumpVelocity;
        }

        // Restart game on Enter
        if (e.getKeyCode() == KeyEvent.VK_ENTER && gameOver) {
            resetGame();
        }
        if (e.getKeyCode() ==KeyEvent.VK_BACK_SPACE) {

            placePipesTimer.start();
            gameLoop.start();
            chec=false;


        }
    }

    public void resetGame() {
        bird.y = height / 2;
        velocityY = 0;
        velocityX = -4; // Reset pipe speed to its default value
        pipes.clear();
        score = 0;
        gameOver = false;
        birdFalling = false;

        // Restart timers only if they are not running
          if (!placePipesTimer.isRunning()) placePipesTimer.start();
        if (!gameLoop.isRunning()) gameLoop.start();
    }

    @Override
    public void keyTyped(KeyEvent e) {}

    @Override
    public void keyReleased(KeyEvent e) {}
}

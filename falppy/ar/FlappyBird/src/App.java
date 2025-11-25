import javax.swing.*;

public class App {
    public static void main(String[] args) throws Exception {
       int height=640;
       int width=360;
       JFrame frame =new JFrame("Flappy Bird");
       frame.setSize(width,height);
       frame.setLocationRelativeTo(null);
       frame.setResizable(false);
       frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
       FlappyBird bird=new FlappyBird();
       frame.add(bird);
       frame.pack();
       bird.requestFocus();
       frame.setVisible(true);




    }
}

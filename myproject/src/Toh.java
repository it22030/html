import java.util.Scanner;

public class Toh {

    
    public static void solveTowerOfHanoi(int n, char source, char target, char auxiliary) {
        
        if (n == 1) {
            System.out.println("Move disk 1 from " + source + " to " + target);
            return;
        }

       
        solveTowerOfHanoi(n - 1, source, auxiliary, target);

        
        System.out.println("Move disk " + n + " from " + source + " to " + target);

        solveTowerOfHanoi(n - 1, auxiliary, target, source);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

       
        System.out.print("Enter the number of disks: ");
        int n = scanner.nextInt();

     
        System.out.println("Solution for Tower of Hanoi with " + n + " disks:");
        solveTowerOfHanoi(n, 'A', 'C', 'B'); 

        scanner.close();
    }
}


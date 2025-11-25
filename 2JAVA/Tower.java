 import java.util.Scanner;

public class Tower {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 

        System.out.print("Enter the number of disks: ");
        int n = sc.nextInt(); 
        
        solveTowerOfHanoi(n, 'A', 'C', 'B');
        
        sc.close(); // Scanner বন্ধ করাও ভালো অভ্যাস
    }

    public static void solveTowerOfHanoi(int n, char source, char destination, char auxiliary) {
        if (n == 1) {
            System.out.println("Move disk 1 from " + source + " to " + destination);
            return;
        }
        solveTowerOfHanoi(n - 1, source, auxiliary, destination);
        System.out.println("Move disk " + n + " from " + source + " to " + destination);
        solveTowerOfHanoi(n - 1, auxiliary, destination, source);
    }
}

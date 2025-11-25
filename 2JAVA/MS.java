import java.util.Scanner;

class MS {
    static void generate(int n) {
        int x, a[][] = new int[n][n], r = 0, c = n / 2;
        
        for (x = 1; x <= n * n; x++) {
            a[r][c] = x;
            if (x % n == 0) {
                r++;
            } else {
                r--;
                c--;
                if(r<0) r+=n;
                if(c<0) c+=n;
            }
            }
            
            // Wrap around if out of bounds
           /* / if (r < 0) {
                r += n;
            }
            if (c >= n) {
                c -= n;
            }
            if (r >= n) {
                r -= n;
            }
        }  //* */
        
        // Print the magic square
        System.out.println("\nMagic Square of size " + n + "x" + n + ":");
        for (r = 0; r < n; r++) {
            for (c = 0; c < n; c++) {
                System.out.print(a[r][c] + "\t");
            }
            System.out.println();
        }
    }
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter the size of the Magic Square (odd number): ");
        int size = scanner.nextInt();
        
        // Check if the input is odd
        if (size % 2 == 0) {
            System.out.println("Error: Magic Square size must be an odd number!");
        } else {
            generate(size);
        }
        
        scanner.close();
    }
}
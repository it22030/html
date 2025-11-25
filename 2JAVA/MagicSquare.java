public class MagicSquare {
    public static void generateMagicSquare(int n) {
        if (n % 2 == 0) {
            System.out.println("Magic square generation is only implemented for odd numbers.");
            return;
        }

        int[][] magicSquare = new int[n][n];

        int number = 1;
        int i = 0, j = n / 2;

        while (number <= n * n) {
            magicSquare[i][j] = number;
            number++;
            i--;
            j++;

            if (number % n == 1) {
                i += 2;
                j--;
            } else {
                if (j == n) {
                    j -= n;
                } else if (i < 0) {
                    i += n;
                }
            }
        }

        // Printing the magic square
        System.out.println("Magic Square of size " + n + ":");
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                System.out.print(magicSquare[i][j] + "\t");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int n = 3; // Order of magic square (must be odd)
        generateMagicSquare(n);
    }
}

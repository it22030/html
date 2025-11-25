import java.util.Scanner;

public class PalindromeCheck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        int original = num;
        int reversed = 0;

        // Reverse the number
        while (num != 0) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }

        // Check if original and reversed are the same
        if (original == reversed) {
            System.out.println("It's a palindrome number!");
        } else {
            System.out.println("Not a palindrome number.");
        }

        sc.close();
    }
}


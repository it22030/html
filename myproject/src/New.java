import java.util.Arrays;
import java.util.Scanner;

class BinarySearch {
    public static int search(int[] array, int target) {
        return Arrays.binarySearch(array, target);
    }
}

public class New {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of elements in the array: ");
        int n = scanner.nextInt();

        int[] array = new int[n];

        System.out.println("Enter " + n + " elements:");
        for (int i = 0; i < n; i++) {
            array[i] = scanner.nextInt();
        }

        System.out.print("Enter the target value to search for: ");
        int target = scanner.nextInt();

        Arrays.sort(array);
        int result = BinarySearch.search(array, target);

        System.out.println("Sorted Array: " + Arrays.toString(array));
        if (result >= 0) {
            System.out.println("Element found at index: " + result);
        } else {
            System.out.println("Element not found. Insertion point: " + (-result - 1));
        }
    }
}


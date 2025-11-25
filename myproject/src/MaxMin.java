import java.util.Scanner;

public class MaxMin {

  
    public static int[] findMaxMin(int[] arr, int low, int high) {
        int[] result = new int[2]; 
        

        if (low == high) {
            result[0] = arr[low]; 
            result[1] = arr[low];
            return result;
        }
        
   
        if (high == low + 1) {
            if (arr[low] < arr[high]) {
                result[0] = arr[low]; 
                result[1] = arr[high]; 
            } else {
                result[0] = arr[high]; 
                result[1] = arr[low]; 
            }
            return result;
        }
        
        
        int mid = (low + high) / 2;
        
     
        int[] leftResult = findMaxMin(arr, low, mid);
        int[] rightResult = findMaxMin(arr, mid + 1, high);
        
      
        result[0] = Math.min(leftResult[0], rightResult[0]); 
        result[1] = Math.max(leftResult[1], rightResult[1]); 
        
        return result;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        
        System.out.print("Enter the number of elements in the array: ");
        int n = scanner.nextInt();
        
    
        int[] arr = new int[n];
        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        
        
        int[] result = findMaxMin(arr, 0, n - 1);
        
  
        System.out.println("Minimum: " + result[0]);
        System.out.println("Maximum: " + result[1]);
        
        scanner.close();
    }
}


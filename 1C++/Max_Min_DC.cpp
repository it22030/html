#include <bits/stdc++.h>
#include <iostream>
#include <climits>
using namespace std;

// Structure to hold both min and max values
struct MinMax {
    int min;
    int max;
};

// Function to find min and max using divide and conquer
MinMax findMinMax(int arr[], int low, int high) {
    MinMax result, left, right;
    
    // If there's only one element
    if (low == high) {
        result.min = arr[low];
        result.max = arr[low];
        return result;
    }
    
    // If there are two elements
    if (high == low + 1) {
        if (arr[low] < arr[high]) {
            result.min = arr[low];
            result.max = arr[high];
        } else {
            result.min = arr[high];
            result.max = arr[low];
        }
        return result;
    }
    
    // If there are more than two elements, divide the array
    int mid =(low+high)/2;
   // int mid = low + (high - low) / 2;
    left = findMinMax(arr, low, mid);
    right = findMinMax(arr, mid + 1, high);
    
    // Compare min and max of two parts
    result.min = (left.min < right.min) ? left.min : right.min;
    result.max = (left.max > right.max) ? left.max : right.max;
    
    return result;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    int arr[n]; // Using array instead of vector
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    MinMax result = findMinMax(arr, 0, n - 1);
    
    cout << "Minimum element is " << result.min << endl;
    cout << "Maximum element is " << result.max << endl;
    
    return 0;
}




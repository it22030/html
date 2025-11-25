#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
           //int arr[] = {7, 4, 2, 9, 6, 3, 8};
                 //int n = 7;    //Array_size= int n = sizeof(arr) / sizeof(arr[0]);

    // Step 1: Array size input
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];  // Dynamically sized array

    // Step 2: User input for array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

     // Printing the array
     cout << "Array elements: ";
     for (int i = 0; i < n; i++) {
         cout << arr[i] << " ";
     }
        cout<<endl;

    // Step 3: Even numbers আলাদা করা এবং তাদের index রাখা
    vector<int> evens;
    vector<int> even_positions; // তাদের index

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)    //if (arr[i] % 2 == 0)  for Odd
        {
            evens.push_back(arr[i]);
            even_positions.push_back(i);
        }
    }

    // Step 4: Even numbers sort করা
    sort(evens.begin(), evens.end());

    // Step 5: Sorted Even numbers print করা
    cout << "Sorted Even numbers: ";
    for (int num : evens) {
        cout << num << " ";
    }
    cout << endl;

    // Step 6: Sorted even numbers আবার ঠিক even এর index গুলোতে বসানো ; Even num(index)মধ্যে শুধু sort
    for (int i = 0; i < even_positions.size(); i++) {
        arr[even_positions[i]] = evens[i];
    }

    // Step 7: Final array print করা
    cout << "Array after sorting Even numbers: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

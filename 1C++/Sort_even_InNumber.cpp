#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {7, 4, 2, 9, 6, 3, 8};
    int n = 7;

    // Step 1: Even numbers আলাদা করা
    vector<int> evens;
    vector<int> even_positions; // তাদের index

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)    //if (arr[i] % 2 == 0)  for Odd
        {
            evens.push_back(arr[i]);
            even_positions.push_back(i);
        }
    }

    // Step 2: Even numbers sort করা
    sort(evens.begin(), evens.end());

       // Step 3: Sorted Even গুলো print করবো
       cout << "Sort Even without Odd: ";
       for (int num : evens) {
        cout <<num << " ";
    }
    cout << endl; 

    // Step 3: Sorted even গুলো আবার ঠিক index গুলোতে বসানো
    for (int i = 0; i < even_positions.size(); i++) {
        arr[even_positions[i]] = evens[i];
    }

    // Step 4: Final array print করা
    cout << "Sort for even number: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

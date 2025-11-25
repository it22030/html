#include <iostream>
using namespace std;

struct Result {
    int min;
    int max;
};

Result findMaxMin(int arr[], int low, int high) {
    if (low == high)
        return {arr[low], arr[low]};

    if (high == low + 1) {
        if (arr[low] < arr[high])
            return {arr[low], arr[high]};
        else
            return {arr[high], arr[low]};
    }

    int mid = (low + high) / 2;
    Result left = findMaxMin(arr, low, mid);
    Result right = findMaxMin(arr, mid + 1, high);

    return {min(left.min, right.min), max(left.max, right.max)};
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    Result ans = findMaxMin(arr, 0, n - 1);

    cout << "Minimum: " << ans.min << endl;
    cout << "Maximum: " << ans.max << endl;

    return 0;
}



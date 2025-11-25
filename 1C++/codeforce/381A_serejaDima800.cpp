#include <bits/stdc++.h>
using namespace std;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fast_io();

    int t;
    cin >> t;
    vector<int> arr(t);
    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }

    int left = 0, right = t - 1;
    int sereja = 0, dima = 0;
    bool serejaTurn = true; // Sereja starts first

    while (left <= right) {
        if (arr[left] >= arr[right]) {
            if (serejaTurn) {
                sereja += arr[left];
            } else {
                dima += arr[left];
            }
            left++;
        } else {
            if (serejaTurn) {
                sereja += arr[right];
            } else {
                dima += arr[right];
            }
            right--;
        }
        serejaTurn = !serejaTurn; // Switch turns
    }

    cout << sereja << " " << dima << endl;

    return 0;
}
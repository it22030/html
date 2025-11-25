#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    if (k == 0) {
        int t = a[0] - 1;
        if (t < 0) cout << -1 << endl;
        else cout << t << " 0" << endl;
    } else {
        // pick t = a[n - k]
        int t = a[n - k];
        // check if number of ai >= t is exactly k
        int count = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] >= t) count++;
        }
        if (count == k)
            cout << t << " 0" << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}

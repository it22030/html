#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);

        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        sort(a.begin(), a.end());         
        sort(b.rbegin(), b.rend());          

        for (int i = 0; i < n && i < k; i++) {
            if (b[i] > a[i]) swap(a[i], b[i]);
            else break;                      
        }

        cout << accumulate(a.begin(), a.end(), 0) << "\n";
    }
    return 0;
}

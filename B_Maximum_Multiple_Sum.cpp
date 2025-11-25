#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'

//void solve() {   }

signed main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    //solve();
    int t;  cin >> t;
     while (t--) {
        int n;
        cin >> n;
        long long bestSum = -1;
        int bestX = 2;

        for (int x = 2; x <= n; x++) {
            int k = n / x;
            long long sum = 1LL * x * k * (k + 1) / 2;
            if (sum > bestSum) {
                bestSum = sum;
                bestX = x;
            }
        }
        cout << bestX << "\n";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> cnt(n + 1, 0);
    int filled = 0;    // number of columns having height >=1
    int ans = 0;

    for(int i = 0; i < m; i++) {
        int c;
        cin >> c;

        cnt[c]++;
        if(cnt[c] == 1) filled++;

        if(filled == n) {
            ans++;
            // remove one bottom row
            for(int j = 1; j <= n; j++) {
                cnt[j]--;
                if(cnt[j] == 0) filled--;
            }
        }
    }

    cout << ans;
    return 0;
}

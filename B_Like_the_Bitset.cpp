 #include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        bool bad = false;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') cnt++;
            else cnt = 0;
            if (cnt >= k) bad = true;
        }

        if (bad) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        int low = 1, high = n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') p[i] = low++;
            else p[i] = high--;
        }
        for (int i = 0; i < n; i++) {
            cout << p[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  
//Accepted code 
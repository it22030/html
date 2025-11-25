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
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        set<char> seen;
        bool suspicious = false;

        for (int i = 0; i < n; ++i) {
            if (i > 0 && s[i] != s[i-1] && seen.count(s[i])) {
                // নতুন অক্ষর, আগেও দেখা হয়েছিল => break in block => suspicious
                suspicious = true;
                break;
            }
            seen.insert(s[i]); // অক্ষরটি দেখা হয়েছে
        }

        cout << (suspicious ? "NO" : "YES") << endl;
    }

    return 0;

}

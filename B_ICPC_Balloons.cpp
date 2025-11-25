#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        set<char> myset;  // character নিয়েই কাজ করছি

        for (char c : s) {
            myset.insert(c);
        }

        int num = myset.size();  // unique character count
        cout << n + num << endl;
    }

    return 0;
}

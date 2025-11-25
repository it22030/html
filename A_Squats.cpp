#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'

//void solve() {}

signed main() {
    
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    //solve();
     int n;
    cin >> n;

    string a;
    cin >> a;

    int count_x = 0;

    // Step 1: Count how many are sitting
    for (char ch : a) {
        if (ch == 'x') count_x++;
    }

    int target = n / 2;
    int changes_needed = abs(count_x - target);  // How many changes needed

    cout << changes_needed << endl;

    // Step 2: Fix the string
    for (int i = 0; i < n && count_x > target; i++) {
        if (a[i] == 'x') {
            a[i] = 'X';
            count_x--;
        }
    }

    for (int i = 0; i < n && count_x < target; i++) {
        if (a[i] == 'X') {
            a[i] = 'x';
            count_x++;
        }
    }

    cout << a << endl;

    return 0;
}

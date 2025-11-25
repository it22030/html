
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'

//void solve() {   }
int findOriginalLength(string s) {
    int l = 0, r = s.size() - 1; //left ,right index 
    while (l < r && ((s[l] == '0' && s[r] == '1') || (s[l] == '1' && s[r] == '0'))) {
        l++;
        r--;
    }
    return r -l+ 1;
}

signed main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    //solve();
    int t;  cin >> t;
     while (t--) {
         int n;  cin>>n;
         string s;
         cin >> s;
        cout << findOriginalLength(s) << '\n';
    }
    return 0;
}


// #include <iostream>
// using namespace std;

// int findOriginalLength(string s) {
//     int l = 0, r = s.size() - 1;
//     while (l < r && ((s[l] == '0' && s[r] == '1') || (s[l] == '1' && s[r] == '0'))) {
//         l++;
//         r--;
//     }
//     return r -l+ 1;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;  cin>>n;
//         string s;
//         cin >> s;
//         cout << findOriginalLength(s) << '\n';
//     }
//     return 0;
// }

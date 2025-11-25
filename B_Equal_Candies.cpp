// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define pb push_back
// #define all(v) (v).begin(), (v).end()
// #define endl '\n'

// //void solve() {   }

// signed main() {
//     cin.tie(NULL);
//     ios::sync_with_stdio(false);
//     //solve();
//     int t;  cin >> t;
//     while (t--)
//     {
//         int n; cin >>n;
//         int a[n];
//         for(int i=0;i<n;i++){
//           cin>>a[i]; 
//         }
//         int sum=0;
//            int s = sizeof(a) / sizeof(a[0]);
//           int minValue = *min_element(a, a + s);
//         for(auto arr:a){
//          sum+=(arr-minValue);
//         }  cout<<sum<<endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, x, mn = INT_MAX;
        long long sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x;
            sum += x;
            mn = min(mn, x);
        }
        cout << sum - 1LL * n * mn << "\n";
    }
}


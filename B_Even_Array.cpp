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
//     while(t--){
//         int n; cin>>n;
//         int arr[n],cnt=0; 
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//             if((i)%2!=arr[i]%2){
//                 cnt++;
//             } 
//          } 
//          if( cnt%2==0)cout<<cnt/2<<endl;
//          else  cout<<"-1"<<endl;
//         // else cout<<"0"<<endl;
//     }
// }




#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) cin >> a[i];
        
        int wrong_even = 0, wrong_odd = 0;
        for (int i = 0; i < n; ++i) {
            if (i % 2 != a[i] % 2) {
                if (i % 2 == 0) wrong_even++;
                else wrong_odd++;
            }
        }

        if (wrong_even == wrong_odd) {
            cout << wrong_even << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}

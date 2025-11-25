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
//         int n;
//          cin>>n;
//         int cnt1=0,cnt2=0;
//         while(n--){
            
//             int a; cin>>a;
//             if(a==1){cnt1++;}
//             else cnt2++;
//         }
//         int t=cnt1+(2*cnt2);
//         // if(cnt1==cnt2 || (cnt1==0 && cnt2%2==0) || (cnt2==0 && cnt1%2==0)){
//         //     cout<<"YES"<<endl;} 
//        // if(t%2==0 ||(cnt1>1 &&cnt1%2==0 && cnt2%2!=0)   )  cout<<"YES"<<endl;
//         if(t%2!=0 ||(cnt1%2!=0 || cnt2%2!=0) ||(cnt1%2!=0 && cnt2%2!=0)  )  cout<<"NO"<<endl;
//         else cout<<"YES"<<endl;
//     }
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt1 = 0, cnt2 = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 1) cnt1++;
            else cnt2++;
        }

        int total = cnt1 + 2 * cnt2;

        if (total % 2 != 0) {
            cout << "NO\n";
        } else {
            int half = total / 2;
            if (half % 2 != 0 && cnt1 == 0 )
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
}

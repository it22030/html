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
//     int n,a,b,c;  cin >> n>>a>>b>>c;
//     int dis=0,meal=1;
//      for(int i=1;i<=n;i++)
//     {
//          if(meal<n ) {
//             int mind1=min(a,b); 
//             if(mind1==a){ dis+=a; meal++;
//             if(meal<n){dis+=c;meal++;
//             if(meal<n){dis+=b;meal++;}
//             }}
//             else{
//                 dis+=b;meal++;
//                 if(meal<n){dis+=c;meal++;
//                 if(meal<n){dis+=a;meal++;}}
//             }
//         }
//         else if(meal==n){
//             cout<<dis<<endl;
//             break;
//         }
//     }
    
  
// }




#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'

signed main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, a, b, c;
    cin >> n >> a >> b >> c;

    // 0: Rabbit, 1: Owl, 2: Eeyore
    int dis = 0, meal = 1;
    int current = 0; // 0 means Rabbit

    while (meal < n) {
        if (current == 0) { // From Rabbit
            if (a <= b) {
                dis += a;
                current = 1; //come to owl
            } else {
                dis += b;
                current = 2;  // come to E
            }
        } else if (current == 1) { // From Owl
            if (a <= c) {
                dis += a;
                current = 0;  //come to R
            } else {
                dis += c;
                current = 2;   //come to E
            }
        } else if (current == 2) { // From Eeyore
            if (b <= c) {
                dis += b;
                current = 0;  //come to R
            } else {
                dis += c;
                current = 1;  //come to Owl
            }
        }
        meal++;
    }

    cout << dis << endl;
}

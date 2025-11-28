// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n,k;
// cin>>n>>k;
// cout<<max(n*3-k,0);
// }


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
//     //int t;  cin >> t;

//     int n,k;
// cin>>n>>k;
// cout<<max(n*3-k,0);
// }


#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//#define ll long long
#define all(v) (v).begin(), (v).end()
#define endl '\n'

int main() {
    fastio;
    
    int en,sm;
    cin >> en>>sm;
    //while (t--) {  }
    if((en==1 & sm>2) ||(3*en<=sm))cout<<"0"<<endl;
    else if(sm%en!=0 & sm>en){
    cout<<3*en-sm<<endl;}
    else {
        cout<<en<<endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// #define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// #define ll long long
// #define all(v) (v).begin(), (v).end()
// #define endl '\n'

// int main() {
//     fastio;
    
//     int en,sm,cnt;
//     cin >> en>>sm;
//     //while (t--) {  }
//      cnt=sm-3*en;
//      if(cnt>=0) cout<<"0"<<endl;
//      else cout<<3*en-sm<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string pw;
    cin >> pw;
    int t;
    cin >> t;

    bool found = false;
    bool first_match = false;
    bool second_match = false;

    while(t--) {
        string n;
        cin >> n;

        if(n == pw) {
            found = true;
             //cout << "YES\n";
        }
     
        if(n[1] == pw[0]) first_match = true;
        if(n[0] == pw[1]) second_match = true;
    }

    if( found || (first_match && second_match)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}



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
//     string pw,ns=""; cin>>pw;
//     int t;  cin >> t;
//     while(t--){
//         string n;
//         cin>>n;
//         if(n==pw){ cout<<"YES"<<endl;       break; }
//         else if(pw[0]==n[1]){ns+=n[1]; cout<<"ns[0]="<<ns[0]<<endl;} 
//         else if(ns[0]==n[1] && pw[1]==n[0]){ns+=n[0]; cout<<"ns[1]="<<ns[1]<<endl;}
//     }
//     cout<<"ns="<<ns<<endl;
//     if(ns==pw) cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;
// }

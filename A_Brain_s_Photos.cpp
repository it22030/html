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
    //int t;  cin >> t;
    int r,c,clr=0;
    cin>>r>>c;
         
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            char s; cin>>s;
            if(s!='B' && s!='W' && s!='G' ){
                clr++;
            } }
    }  
    if(clr>=1)cout<<"#Color"<<endl;
    else cout<<"#Black&White"<<endl;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int r, c;
//     cin >> r >> c;

//     bool isColor = false;

//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             char s;
//             cin >> s;
//             if (s != 'B' && s != 'W' && s != 'G') {
//                 isColor = true;
//             }
//         }
//     }

//     if (isColor)
//         cout << "#Color\n";
//     else
//         cout << "#Black&White\n";

//     return 0;
// }


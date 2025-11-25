
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
    int t;  cin >> t;
    string name={"Timur"}; sort(name.begin(),name.end());
    while(t--){
        int n; cin>>n;
        string str;
         cin>>str;
        // if("Timur"==str || "miurT"==str  || "Trumi"==str || "mriTu"==str) 
        // cout<<"YES"<<endl;
        // else cout<<"NO"<<endl;
       
        sort(str.begin(),str.end());
       if(name==str) cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
        
    }
}

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
    while(t--){
        int a,b,m,mx; cin>>a>>b;
        m=min(a,b);  mx=max(a,b);
        if(2*m>mx) cout<<4*m*m<<endl;
        else cout<<mx*mx<<endl;
    }
}

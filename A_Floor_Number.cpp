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
        int n,x,f=1; cin>>n>>x;          //3 to (x+2)
        n-=2;
        while(n>0){
         n-=x; 
         f++;
        }
        cout<<f<<endl;
    }
}

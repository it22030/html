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
        int n,a ,cntODD=0; cin>>n;
        for(int i=0;i<n;i++){
            cin>>a; 
            if(a%2!=0){
                cntODD++;
            }
        }
        if(cntODD%2==0){
            cout<<"YES"<<endl;
        } else cout<<"NO"<<endl;
    }
}

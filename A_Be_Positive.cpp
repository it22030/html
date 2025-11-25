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
    int t,n,x;  cin >> t;
    while(t--){
        cin>>n;  
        int ocnt=0,zcnt=0,nocnt=0;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x==1) ocnt++;
         else if(x==0) zcnt++;
            else nocnt++;
        }  
        cout<<zcnt+(nocnt%2)*2<<endl;  
    }
}

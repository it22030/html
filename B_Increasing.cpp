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
    while (t--)
    {
       int n; cin>>n;
      set<int> a;    

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.insert(x);   
    }  if(a.size()==n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
       
    }
    
}

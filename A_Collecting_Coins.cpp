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
        int a,b,c,n;
        cin>>a>>b>>c>>n;
      
         ll mx = max({a, b, c});
        int req=(mx-a)+(mx-b)+(mx-c);
          if (n < req) cout << "NO\n";
        else if ((n - req) % 3 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
}

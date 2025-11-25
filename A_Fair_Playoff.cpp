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
        int a,b,c,d,m1,m2;
        cin>>a>>b>>c>>d;
      m1=max(a,b); m2=max(c,d);
      vector<int> v = {a, b, c, d};
    sort(v.begin(), v.end());
    if((m1>=v[2]||m1>=v[3]) &&(m2>=v[2]||m2>=v[3])) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
    }
}
//   int first = max({a, b, c, d});
//   int second = min(max(a, b), max(c, d));
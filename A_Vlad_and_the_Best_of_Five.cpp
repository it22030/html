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
      string s; cin>>s;
      int sumA=0,sumB=0;
      for(auto str:s){
        if(str=='A') sumA++;
        else sumB++;
      } 
      if(sumA>sumB)cout<<"A"<<endl;
      else cout<<"B"<<endl;
    }
    return 0;
}

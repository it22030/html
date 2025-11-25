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
    //int n;  cin >> n;
    string s;
    cin>>s;
    int fD = (s[0] - '0');
    int sz=s.size();
    int num=1;
       for(int i=1;i<sz;i++) num*=10;  //cout<<num<<endl;
     int ans=((fD+1)*num)-stoi(s);
     cout<<ans<<endl;
    
}

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
    int t,hh,mm;  cin >> t;
    while(t--){
    cin>>hh>>mm;
    cout<<(23-hh)*60+(60-mm)<<endl;
    }
}

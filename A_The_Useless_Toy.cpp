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
     char start,end;
    string spn="v<^>"; cin>>start>>end;
    ll t;  cin >> t;
    int F_index=spn.find(start);
    int e_index=spn.find(end);
    int cw_index=(F_index+t)%4;
    int ccw_index=(F_index-(t%4)+4)%4;
    if(cw_index==e_index && ccw_index==e_index)
    cout<<"undefined\n";
    else if (cw_index==e_index && ccw_index!=e_index)
    cout<<"cw\n";
    else cout<<"ccw\n";
    return 0;

}

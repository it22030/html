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
    //int t;  cin >> t;
    int hh1,mm1,hh2,mm2,hh,mm,w,s,time;
    char clm1,clm2;
    cin>>hh1>>clm1>>mm1;
    cin>>hh2>>clm2>>mm2;

    w=hh1*60+mm1; s=hh2*60+mm2;

     time=1440+w-s;
     hh=(time/60)%24;
     mm=time%60;
     
     if (hh < 10) cout << "0";
     cout << hh << ":";
    if (mm < 10) cout << "0";
    cout << mm << "\n";
       
}

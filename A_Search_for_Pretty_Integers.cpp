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
    int n,m,mia,mib;  cin >>n>>m;
    vector<int>a(n),b(m);
       set<int>as,bs;
    for(int i=0;i<n;i++){
        cin>>a[i];
        as.insert(a[i]);
    }
       for(int i=0;i<m;i++){
        cin>>b[i];
        bs.insert(b[i]);
    }
     
 
      for (int i = 1; i <= 9; ++i) {
        if (as.count(i) && bs.count(i)) {
            cout << i << endl;  // smallest common
            return 0;
        }
    }

   mia=*min_element(a.begin(),a.end()); // cout<<mia<<endl;
   mib=*min_element(b.begin(),b.end()); // cout<<mib<<endl;
   if(mia==mib) cout<<mia<<endl;
   else if(mia>mib)  cout<<mib<<mia<<endl;
   else  cout<<mia<<mib<<endl;
}

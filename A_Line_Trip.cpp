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
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ref,maxfu=0;
        for(int i=1;i<n;i++){
          ref= a[i]-a[i-1];
          if(ref>maxfu)maxfu=ref;
        }
         ref=abs(0-a[0]);  if(ref>maxfu)maxfu=ref;
        ref=2*(x-a[n-1]);  if(ref>maxfu)maxfu=ref; //cout<<2*ref<<endl;

    cout<<maxfu<<endl;
    }
}

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
    int n,cnt=0,z=0;  cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)cnt++;
        //else z++;
    }
    for(int i=1;i<n-1;i++){
        if( a[i-1]==1 && a[i]==0 && a[i+1]==1) {z++; //cout<<z<<endl;
        }
    }
     cout<<cnt+z<<endl;
   // else  cout<<cnt<<endl;
}

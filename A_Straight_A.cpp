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
    float n,k,sum=0;;  cin >> n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=0;;i++){
        float result=(sum +i*k)/(n+i);
       // cout<<result<<" ";
        if(result>=(k-.5)){
            cout<<i<<endl;
            return 0;
        }
    }
}

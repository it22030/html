#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'


void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fast_io();
    ll n,k;
    cin >>n>>k;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll count=0;
    for(ll i=1;i<n;i++){
         if ((a[i] - a[0]) % k != 0) {
            cout<<"-1"<<endl;
            return 0; }
   else {
    count+=a[i]-a[0];
   }
    }
    cout<<count/k<<endl;

    return 0;
}

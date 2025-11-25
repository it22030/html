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
    int n,k;
    cin >> n>>k;
    int a[n];
    for(int i=0;i<n;i++){
       cin>>a[i];
    }
         sort(a,a+n,greater<int>());
        cout<<a[k-1]<<endl;
    return 0;
}

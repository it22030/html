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
    int T,a,b;
    cin >> T;
    while(T--){
     cin>>a>>b;
     int count=0;
     while(a>0 && b>0){
     if(a>=b){
        count+=a/b; 
        a%=b;
     } else {
        count+=b/a;
        b%=a;
     }
     } 
     cout<<count<<endl;
    }
    return 0;
}

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
    ll bl,ir,mr,ar,l,day=1;
    cin >>bl>>ir>>mr>>ar>>l;
    bl-=ir;
    while(bl>0){
        ir=min(ar+ir,mr);
       // bl=bl-ir+l;
       bl+=l; bl-=ir;
        day++;
    }
    cout<<day<<endl;
    
    return 0;
}

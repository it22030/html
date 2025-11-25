
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
    int x[t],a=1,b=2,c=3,s,p1,p2;
    for(int i=0;i<t;i++){
        cin>>x[i];}
        
    if(x[0]==3){ cout<<"NO"<<endl; return 0;}
    else if(x[0]!=a){s=a;p1=b;p2=c;} else {s=b; p1=a; p2=c; }
    for(int i=1;i<t;i++){
        if(x[i]==s){   cout<<"NO"<<endl; return 0;}
        else{ if(x[i]==p1){ swap(s,p2); } 
         else if(x[i]==p2){ swap(s,p1); }
    }
    }  
     cout<<"YES"<<endl;

   return 0;
}

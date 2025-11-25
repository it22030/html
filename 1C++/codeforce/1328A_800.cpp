#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fast_io();
    int n,a,b;
    cin >> n; 
    
    for(int i=0;i<n;i++){
     cin>>a>>b;
     if(a>b && a%b==0){
        cout<<0<<endl;
       }
    else if(a>b){
        a%=b; b-=a; cout<<b<<endl;
     }
      else cout<<(b-a)<<endl;
     
    }
   cout << endl;
    return 0;
}
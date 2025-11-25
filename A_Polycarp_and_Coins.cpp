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
        int n; cin>>n;
        int n1=n;
         int a=n/3;
        if(n1%3!=0){
        if((2*a+a+1==n1))cout<<a+1<<" "<<a<<endl;
        else cout<<a<<" "<<a+1<<endl;}
        else{
         cout<<a<<" "<<a<<endl;
        }
    }
}

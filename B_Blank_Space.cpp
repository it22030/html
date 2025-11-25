#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'

  //void solve() {}

signed main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

      int t;  cin >> t;
    while (t--){
        int n,a;
        cin >>n;
        int current_s=0,max_s=0;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a==0){
            current_s++;
            }
           else {if(current_s>max_s)max_s=current_s; current_s=0;}
        }
        //if(current_s>max_s){max_s=current_s;} current_s=0;
           if(current_s > max_s) max_s = current_s;
        cout<<max_s<<endl;
    } ;
}

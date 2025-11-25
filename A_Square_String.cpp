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
        string str;
        cin>>str;
        int l=str.size();
        if(l%2!=0) cout<<"NO"<<endl;
        else{
                int half = l / 2;
    string firstHalf = str.substr(0, half);
    string secondHalf = str.substr(half, half);
    if(firstHalf==secondHalf)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
        }
    }
}

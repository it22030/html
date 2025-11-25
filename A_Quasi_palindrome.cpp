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
    
   string s,s1; cin>>s;
   
    while (!s.empty() && s.back() == '0') { s.pop_back();}   
    s1=s;
   reverse(s.begin(),s.end());  //cout<<s<<endl;
   int num=stoi(s); int num1=stoi(s1);// cout<<num<<" "<<num1<<endl;
   if(stoi(s1)==stoi(s))cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}

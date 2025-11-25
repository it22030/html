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
    int n,a=0,t=0,g=0,c=0,ques=0;  cin >> n;
    string s; cin>>s;
    if(n%4!=0)cout<<"==="<<endl;

    else{
    for(int i=0;i<n;i++){
        if(s[i]=='A') a+=1;
        else if(s[i]=='G') g+=1;
        else if(s[i]=='C') c+=1;
        else if(s[i]=='T') t+=1;
        else  ques+=1;
    }
     if(n/4<a || n/4<g || n/4<c || n/4<t){
        cout<<"==="<<endl;
     } else{
       int need=n/4;
    int need_A = need - a;
    int need_G = need - g;
    int need_C = need - c;
    int need_T = need - t;

    for (int i = 0; i < n; i++) {
        if (s[i] == '?') {
            if (need_A > 0) {
                s[i] = 'A';
                need_A--;
            }
            else if (need_G > 0) {
                s[i] = 'G';
                need_G--;
            }
            else if (need_C > 0) {
                s[i] = 'C';
                need_C--;
            }
            else if (need_T > 0) {
                s[i] = 'T';
                need_T--;
            }
        }
    }

    cout << s << '\n';
    return 0;
     }
    }
}

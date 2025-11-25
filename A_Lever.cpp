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
    //int t;  cin >> t;
    string s;
    cin >> s;  
   int sz=s.size();
   ll pivot=0,sol=0,sor=0;
   for(int i=0;i<sz;i++){
    if('^'==s[i]){
        pivot=i;  break; //cout<<pivot<<endl;
    }  
   }  int LI=pivot-1,pnl=1,RI=pivot+1,pnR=1;
    for(int i=LI;i>=0;i--){
      if (s[i] >= '1' && s[i] <= '9'){
         int nul=s[i]-'0';
        sol+=pnl*nul; //cout<<nul<<endl;
      } pnl++;}
      for(int i=RI;i<sz;i++){
      if (s[i] >= '1' && s[i] <= '9'){
        int nur=s[i]-'0';  //cout<<nur<<endl;
        sor+=pnR*nur;
      }  pnR++;}
     // cout<<sol<<" "<<sor<<endl;
     if(sol>sor) cout<<"left"<<endl;
     else if(sol<sor) cout<<"right"<<endl;
     else cout<<"balance"<<endl;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     cin.tie(NULL);
//     ios::sync_with_stdio(false);

//     string s;
//     cin >> s;

//     int sz = s.size();
//     int pivot = -1;
//     for (int i = 0; i < sz; i++) {
//         if (s[i] == '^') {
//             pivot = i;
//             break;
//         }
//     }

//     long long sol = 0, sor = 0;
//     for (int i = 0; i < sz; i++) {
//         if (isdigit(s[i])) {
//             int digit = s[i] - '0';
//             int dist = abs(i - pivot);
//             if (i < pivot)
//                 sol += 1LL * digit * dist;
//             else if (i > pivot)
//                 sor += 1LL * digit * dist;
//         }
//     }

//     if (sol > sor) cout << "left\n";
//     else if (sol < sor) cout << "right\n";
//     else cout << "balance\n";
// }

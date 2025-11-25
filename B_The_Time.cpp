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
     int hh, mm,a,rh,rm;
    char colon;   // ':' 
    cin >> hh >> colon >> mm>>a;
    int summin=hh*60+mm+a;
    rh=summin/60;
    rm=summin-(summin/60)*60;
    if(rh>=10 && rh<=23) cout<<rh<<":";
    else if(rh<=9) cout<<"0"<<rh<<":";
    else if(rh==24)  cout<<"00"<<":";  
    else  while(rh>=24) {
         rh-=24;
        if(rh<24){
           if(rh>=10 && rh<=23) cout<<rh<<":";
           else if(rh<=9) cout<<"0"<<rh<<":"; 
           else if(rh==24)  cout<<"00"<<":"; 
        }
    }
    if(rm<=9)  cout<<"0"<<rm<<endl;
    else cout<<rm<<endl;

}



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int hh, mm, a;
//     char colon;
//     cin >> hh >> colon >> mm >> a;

//     int summin = hh * 60 + mm + a;
//     int rh = (summin / 60) % 24; 
//     int rm = summin % 60;

  
//     if (rh < 10) cout << "0";
//     cout << rh << ":";

  
//     if (rm < 10) cout << "0";
//     cout << rm << "\n";

//     return 0;
// }

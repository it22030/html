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
    while (t--) {
    int n; 
    cin >> n;

  string a, b;
  cin >> a >> b ;

//continue ব্যবহার করে আমরা বলছি –"এই column ঠিক আছে, আর চেক করার দরকার নেই, পরের column এ যাও।"    
   
 bool CB = true;  
for (int i = 0; i < n; i++) {
    if (a[i] == b[i]) continue; 

    if ((a[i] == 'G' && b[i] == 'B') || (a[i] == 'B' && b[i] == 'G')) 
        continue; 

    CB = false; 
    break;
}
 
 if(CB)cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
}}



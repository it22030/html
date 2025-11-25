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
    int sum=0;
    for(int i=1;;i++){   
     sum+=i * (i + 1) / 2;
     if(sum==t){
        cout<<i<<endl;
        break;
     }
      if (sum > t) {
            cout << i-1 << endl;  // কোনো i satisfy করে না
            break;
        }

    }
   // cout<<sum<<endl;
    
}

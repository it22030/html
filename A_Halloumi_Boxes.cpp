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
        int n,k; cin>>n>>k;
        vector<int>str(n);
        for(int i=0;i<n;i++) cin>>str[i];

             vector<int> sorted_a = str;
        sort(sorted_a.begin(), sorted_a.end());

        if (k == 1 && str != sorted_a) cout << "NO\n";
        else cout << "YES\n";
    }
}

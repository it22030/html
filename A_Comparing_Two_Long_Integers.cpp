// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define pb push_back
// #define all(v) (v).begin(), (v).end()
// #define endl '\n'

// //void solve() {   }

// signed main() {
//     cin.tie(NULL);
//     ios::sync_with_stdio(false);
//     //solve();
//    // int t;  cin >> t;
//    ll a,b;
//    cin>>a>>b;
//    if(a>b) cout<<">"<<endl;
//    else if(a<b) cout<<"<"<<endl;
//    else cout<<"="<<endl;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;

    
    a.erase(0, a.find_first_not_of('0'));
    b.erase(0, b.find_first_not_of('0'));

    if (a.empty()) a = "0";
    if (b.empty()) b = "0";

    if (a.size() > b.size()) cout << ">\n";
    else if (a.size() < b.size()) cout << "<\n";
    else if (a > b) cout << ">\n";
    else if (a < b) cout << "<\n";
    else cout << "=\n";

    return 0;
}

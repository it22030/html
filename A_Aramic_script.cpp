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
//     int t;  cin >> t;int cnt=1;
//        string s1 ; cin >>s1;
//       sort(s1.begin(),s1.end());
//         set<char> st1;

//     for (char ch : s1) {
//         st1.insert(ch);
//     }
//     t--; //cout<<t<<endl;
//     while (t--)
//     {   
        
//         string s ; cin >>s;
//        // sort(s.begin(),s.end());
//     set<char> st;

//     for (char ch : s) {
//         st.insert(ch);
//     }
//     if(st!=st1){
//     cnt++;
//     st1=st;
//     }  
    
// }  cout<<cnt<<endl;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    set<set<char>> unique_sets;

    while (t--) {
        string s;
        cin >> s;

        set<char> st(s.begin(), s.end()); // Unique letters only //0index to size input set
        unique_sets.insert(st); // Automatically ignores duplicates
    }

    cout << unique_sets.size() << endl;
    return 0;
}





#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'

signed main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string str;
    cin >> str;

    string rev = str;
    reverse(rev.begin(), rev.end());

    if (rev != str) {
        cout << str.size() << endl;
    } else {
              set<char> st;
            for (char ch : str) {
            st.insert(ch);  // set automatically removes duplicates
             }
             if(st.size()==1)  { cout << "0" << endl; }
             else   {cout << str.size()-1 << endl;}
        
    }

    return 0;
}

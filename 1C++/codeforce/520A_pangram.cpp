#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fast_io();
    int n; string str;
    cin >> n; 
    cin>>str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    set<char> s;
    for (char ch : str) {
        s.insert(ch); 
    }

     if(s.size()<26){
        cout<<"NO"<<endl;
    }  else cout<<"YES"<<endl;

      /* if (s.size() < 26) {
        cout << "NO" << endl;
        cout << "Missing letters: ";
        for (char ch = 'a'; ch <= 'z'; ch++) {
            if (s.count(ch) == 0) {
                cout << ch << " ";
            }
        }
        cout << endl;
    }
     */
     
    
    return 0;
}
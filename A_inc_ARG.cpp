#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
     int n; cin>>n;
    string bits;
    cin >> bits; 
    int changed = 0 ;
    for (char b : bits) {
        changed++;
        if (b == '0') break;
    }
    cout << changed << "\n";
    return 0;
}

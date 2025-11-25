#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;

    int maxSum = 0;

    for (int l = 0; l < n; ++l) {
        int orA = 0, orB = 0;
        for (int r = l; r < n; ++r) {
            orA |= a[r];  cout<<"orA "<<r<<"="<<orA<<endl;
            orB |= b[r];  cout<<"orB "<<r<<"="<<orB<<endl;
            maxSum = max(maxSum, orA + orB);
        } 
    }

    cout << maxSum << '\n';
    return 0;
}

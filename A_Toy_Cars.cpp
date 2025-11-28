#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> A(n, vector<int>(n));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    vector<int> good;

    for (int i = 0; i < n; i++) {
        bool ok = true;

        for (int j = 0; j < n; j++) {
            if (A[i][j] == 1 || A[i][j] == 3) {
                ok = false;
                break;
            }
        }

        if (ok) good.push_back(i + 1);
    }

    cout << good.size() << endl;

    for (int x : good) cout << x << " ";
    cout << endl;

    return 0;
}

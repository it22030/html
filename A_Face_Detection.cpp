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
    int n, m;   //n>row ; m>coloum
    cin >> n >> m;

    vector<string> grid(n);
    for (int i = 0; i < n; ++i)
        cin >> grid[i];

    int count = 0;

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            string block = "";
            block += grid[i][j];
            block += grid[i][j + 1];
            block += grid[i + 1][j];
            block += grid[i + 1][j + 1];

            sort(block.begin(), block.end());

            if (block == "acef")   // sorted string of 'f','a','c','e'
                count++;
        }
    }

    cout << count << endl;
    return 0;
}



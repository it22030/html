#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fast_io();
    int n;
    cin >> n;
    vector<int> router(n + 1);
    for (int i = 2; i <= n; i++) {
        cin >> router[i];
    }

    vector<int> path;
    int cpath = n;
    while (cpath != 0) {
        path.push_back(cpath);
        cpath = router[cpath];  // এখানে router ব্যবহার করো
    }

    reverse(path.begin(), path.end());

    for (auto final : path) {
        cout << final << " ";
    }
    cout << endl;

    return 0;
}

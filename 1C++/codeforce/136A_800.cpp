#include <bits/stdc++.h>
using namespace std;

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
    int friend_g[n], friend_rg[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> friend_g[i];
        friend_rg[friend_g[i]] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << friend_rg[i] << " ";
    }
    cout << endl;
    return 0;
}

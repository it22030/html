#include <bits/stdc++.h>
using namespace std;

void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fast_io();

    int a, b, c, ma, mi, m, t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        ma = max({a, b, c});
        mi = min({a, b, c});
        m = (a + b + c) - ma - mi;
        if (ma + m >= 10)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}

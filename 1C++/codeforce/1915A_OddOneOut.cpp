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

    int t, a, b, c;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        if (a == b)
            cout << c << endl;
        else if (a == c)
            cout << b << endl;
        else
            cout << a << endl;
    }

    return 0;
}

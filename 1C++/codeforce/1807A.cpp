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
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c)
            cout << "+" << endl;
        else
            cout << "-" << endl;
    }
    return 0;
}

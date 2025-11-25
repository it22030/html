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

    int t, a, b, c, m1, m2, m;
    cin >> t;

    while (t--)
    {
        cin >> a >> b >> c;
        m1 = max({a, b, c});
        m2 = min(a, min(b, c)); // এই দুই ভাবে ডিক্লার করা যাবে
        m = (a + b + c) - m1 - m2;
        cout << m << endl;
    }
    return 0;
}

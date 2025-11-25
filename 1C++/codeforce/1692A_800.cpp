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
    ll a, b, c, d, t, count = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c >> d;
        int count = 0;
        {
            if (a < b)
                count++;
            if (a < c)
                count++;
            if (a < d)
                count++;
            cout << count << endl;
        }
    }
    return 0;
}

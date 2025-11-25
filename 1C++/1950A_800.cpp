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
    int T, a, b, c;
    cin >> T;
    while (T--)
    {
        cin >> a >> b >> c;
        if (a < b && b < c)
            cout << "STAIR" << endl;
        else if (a < b && b > c)
            cout << "PEAK" << endl;
        else
            cout << "NONE" << endl;
    }

    return 0;
}

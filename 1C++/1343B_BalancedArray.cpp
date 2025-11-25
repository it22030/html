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
    int T, a, b, c, sum = 0, odd = -1;
    cin >> T;
    while (T--)
    {
        cin >> a;
        if ((a / 2) % 2 != 0)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            for (int i = 1; i <= a / 2; i++)
            {
                sum += 2 * i;
                cout << 2 * i << " ";
            }
            for (int i = 1; i < a / 2; i++)
                cout << 2 * i - 1 << " ";
            cout << (3 * a / 2 - 1) << "\n";
        }
    }
    return 0;
}

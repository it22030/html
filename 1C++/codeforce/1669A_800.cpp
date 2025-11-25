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
    ll a, t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a;

        {
            if (a >= 1900)
            {
                cout << "Division 1" << endl;
            }
            else if (a < 1900 && a >= 1600)
            {
                cout << "Division 2" << endl;
            }
            else if (a < 1600 && a >= 1400)
            {
                cout << "Division 3" << endl;
            }
            else
            {
                cout << "Division 4" << endl;
            }
        }
    }
    return 0;
}

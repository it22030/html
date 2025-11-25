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
    int a, t;
    cin >> t;
    while (t--)
    {
        cin >> a;
        if (a % 3 == 0)
            cout << "Second" << endl;
        else
            cout << "First" << endl;
    }

    return 0;
}

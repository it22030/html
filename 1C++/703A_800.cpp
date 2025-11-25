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
    int T, a, b, mi = 0, chr = 0;
    cin >> T;
    while (T--)
    {
        cin >> a >> b;
        if (a > b)
            mi++;
        else if (a < b)
            chr++;
    }
    if (mi > chr)
        cout << "Mishka" << endl;
    else if (mi < chr)
        cout << "Chris" << endl;
    else
        cout << "Friendship is magic!^^" << endl;

    return 0;
}


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
    int a, b, maxi, diff, pair;

    cin >> a >> b;
    diff = min(a, b);
    maxi = max(a, b);
    pair = (maxi - diff) / 2;
    cout << diff << " " << pair << endl;

    return 0;
}

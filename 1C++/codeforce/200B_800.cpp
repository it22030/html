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

    int n, oran;
    float result = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> oran;
        result += oran;
    }
    cout << (result / n) << endl;
    return 0;
}

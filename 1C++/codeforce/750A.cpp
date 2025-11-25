
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
    int p, T;
    cin >> p;
    cin >> T;
    int result = 240, count = 0;
    for (int i = 1; i <= p; i++)
    {

        result -= 5 * i; // cout<<result<<" ";
        if (result >= T)
            count++;
    }
    cout << count << endl;

    return 0;
}

// cp_template.cpp

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
    int n, count = 0;
    cin >> n;
    int arrh[n], arra[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arrh[i] >> arra[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arrh[i] == arra[j])
                count++;
        }
    }
    cout << count << endl;

    return 0;
}

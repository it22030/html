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

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            if (i > 1)
            {
                cout << "that ";
            }
            cout << "I hate" << " ";
        }
        else if (i % 2 == 0)
        {
            cout << "that I love" << " ";
        }
    }
    cout << "it" << endl;

    return 0;
}

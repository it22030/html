
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
    vector<string> str(n);
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
        transform(str[i].begin(), str[i].end(), str[i].begin(), ::toupper);

        if (str[i] == "YES")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

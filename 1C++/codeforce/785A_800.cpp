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
    vector<string> str(n);

    for (int i = 0; i < n; i++)
    {
        cin >> str[i];

        if (str[i] == "Icosahedron")
            count += 20;
        else if (str[i] == "Cube")
            count += 6;
        else if (str[i] == "Tetrahedron")
            count += 4;
        else if (str[i] == "Dodecahedron")
            count += 12;
        else if (str[i] == "Octahedron")
            count += 8;
    }
    cout << count << endl;
    return 0;
}

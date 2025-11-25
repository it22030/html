#include <bits/stdc++.h>
using namespace std;

void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fast_io();
    // c,o,d,e,f,r,s
    int t;
    cin >> t;

    vector<char> ch(t);

    for (int i = 0; i < t; i++)
    {
        cin >> ch[i];
        if (ch[i] == 'c' || ch[i] == 'o' || ch[i] == 'd' || ch[i] == 'e' || ch[i] == 'f' || ch[i] == 'r' || ch[i] == 's')
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}

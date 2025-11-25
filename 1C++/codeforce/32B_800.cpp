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
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '-' && str[i + 1] == '-')
        {
            cout << "2";
            i++;
        }
        else if (str[i] == '-' && str[i + 1] == '.')
        {
            cout << "1";
            i++;
        }
        else
            cout << "0";
    }

    return 0;
}

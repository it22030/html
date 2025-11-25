#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, count = 0;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;

        if (s[0] > s[2])
            swap(s[0], s[2]);
        else if (s[0] > s[1])
            swap(s[0], s[1]);
        else if (s[1] > s[2])
            swap(s[1], s[2]);

        // cout<<"result  :"<<s<<endl;

        if (s == "abc")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

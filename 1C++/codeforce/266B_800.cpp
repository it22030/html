#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string str;
    cin >> str;
    while (t--)
    {
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'B' && str[i + 1] == 'G')
            {
                swap(str[i], str[i + 1]);
                i++; //....>>if one time swap ,after index skip
            }
        }
    }
    cout << str << endl;

    return 0;
}

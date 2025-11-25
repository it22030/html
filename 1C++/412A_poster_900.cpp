
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int l = k - 1;
    int r = n - k;
    if (l > r)
    {
        while (r--)
        {
            cout << "RIGHT" << endl;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            cout << "PRINT " << s[i] << endl;
            if (i > 0)
                cout << "LEFT" << endl;
        }
    }
    else
    {
        while (l--)
        {
            cout << "LEFT" << endl;
        }
        for (int i = 0; i < n; i++)
        {
            cout << "PRINT " << s[i] << endl;
            if (i < n - 1)
                cout << "RIGHT" << endl;
        }
    }
    return 0;
} 

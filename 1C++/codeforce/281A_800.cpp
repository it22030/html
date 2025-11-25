#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    if (!isupper(str[0]))
    {
        str[0] = char(toupper(str[0]));
    }
    cout << str << endl;
    return 0;
}

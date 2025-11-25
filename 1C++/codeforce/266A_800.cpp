#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    string str = "";
    char ch;
    cin >> n;
    // vector<string>words;

    for (i = 0; i < n; i++)
    {
        cin >> ch;
        // words.push_back(str);
        str += ch;
    }

    // cout<<words<<endl;
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (str[i] == str[i + 1])
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}

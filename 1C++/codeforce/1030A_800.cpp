

#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    int uniq = 0;
    cin >> n;
    vector<int> num;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        num.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        if (num[i] == 1)
        {
            // cout<<"HARD"<<endl; break;
            uniq++;
            break;
        } // else cout<<"EASY"<<endl;
    }
    // cout<<uniq;
    if (uniq != 0)
    {
        cout << "HARD" << endl;
    }
    else
        cout << "EASY" << endl;

    return 0;
}

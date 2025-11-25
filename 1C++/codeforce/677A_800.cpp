#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, a;
    cin >> n >> h;
    vector<int> num; int i=n;  //while(n--)...no because n=0
      while(i--) // for (int i = 0; i < n; i++)
    {
        cin >> a;
        num.push_back(a);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (num[i] <= h)
        {
            count += 1;
        }
        else
            count += 2;
    }
    cout << count << endl;
    return 0;
}

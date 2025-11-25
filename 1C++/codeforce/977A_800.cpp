#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    while (m > 0)
    {
        int LD = n % 10;
        if (LD != 0)
        {
            n -= 1;
        }
        else
            n = n / 10;
        m--;
    }
    cout << n << endl;
    return 0;
}
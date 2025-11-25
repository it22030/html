#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, i;
    cin >> a >> b;
    for (i = 0; a <= b; i++)
    {

        a = 3 * a; // cout<<a<<" ";
        b = 2 * b; // cout<<b<<" ";
    }
    cout << i << endl;

    return 0;
}

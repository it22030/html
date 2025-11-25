#include <bits/stdc++.h>
using namespace std;

void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fast_io();

    int n, a;
    cin >> n;
    a = n;
    if (n % 2 == 0)
    {
        // n/=2; ....> this is wrong because even/2(odd ,prime or even), 22/2=11(prime)
        cout << 4 << " " << n - 4 << endl;
    }
    else
    {

        int b = 9;
        cout << b << " " << a - b << endl;
    }

    return 0;
}

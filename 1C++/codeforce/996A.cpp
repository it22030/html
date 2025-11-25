#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fast_io();

    long long n;
    int count = 0;
    ;
    cin >> n;
    while (n > 0)
    {
        if (n >= 100)
        {
            n -= 100;
            count++; // cout<<n<<" ";
        }
        else if (n >= 20 && n < 100)
        {
            n -= 20;
            count++;
        }
        else if (n >= 10 && n < 20)
        {
            n -= 10;
            count++;
        }
        else if (n >= 5 && n < 10)
        {
            n -= 5;
            count++;
        }
        else
        {
            n -= 1;
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
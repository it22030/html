
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
    int a, b, c;
    vector<int> num(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> num[i];
    }
    sort(num.begin(), num.end(), greater<int>());
    int max = num[0];
    a = max - num[1];
    b = max - num[2];
    c = max - num[3];
    cout << a << " " << b << " " << c << endl;

    return 0;
}

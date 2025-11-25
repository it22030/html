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
    int n;
    cin >> n;
    string str1, str2;
    while (n--)
    {
        cin >> str1 >> str2;
        swap(str1[0], str2[0]);
        cout << str1 << " " << str2 << endl;
    }
    return 0;
}

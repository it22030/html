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
    int a, total_cal = 0;
    vector<int> cal(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> cal[i];
    }
    string s;
    cin >> s;
    for (auto ch : s)
    {
        total_cal += cal[ch - '1']; //[ch-'1'] index find
    }
    cout << total_cal << endl;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push\_back
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

    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3, greater<int>());
    int result = 0;
    for (int i = 0; i < 2; i++)
    {
        result += arr[i] - arr[i + 1];
    }
    cout << result << endl;

    return 0;
}

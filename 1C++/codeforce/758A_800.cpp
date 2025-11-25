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

    int t, m1, result = 0;
    cin >> t;
    int arr[t];
    // vector<int>arr(t);
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    // m1=*max_element(arr.begin(), arr.end());
    m1 = *max_element(arr, arr + t);

    for (int i = 0; i < t; i++)
    {
        result += m1 - arr[i];
    }
    cout << result << endl;

    return 0;
}

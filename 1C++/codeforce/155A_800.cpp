
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
    int t, min = 0, count = 0;
    cin >> t;

    int arr[t];
    cin >> arr[0];
    int max = arr[0];
    min = arr[0]; // cout<<max<<" "<<min<<endl;;
    for (int i = 1; i < t; i++)
    {
        cin >> arr[i];
        if (arr[i] < arr[i - 1] && min > arr[i])
        {
            count++;
            min = arr[i];
        }
        else if (arr[i] > max && arr[i] > arr[i - 1])
        {
            count++;
            max = arr[i];
        }
    }
    cout << count << endl;

    return 0;
}

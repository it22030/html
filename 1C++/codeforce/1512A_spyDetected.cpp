#include <iostream>
using namespace std;

void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fast_io();

    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        int arr[n];
        int common;

        cin >> arr[0] >> arr[1] >> arr[2];

        // common value
        if (arr[0] == arr[1] || arr[0] == arr[2])
            common = arr[0];
        else
            common = arr[1];

        for (int i = 3; i < n; i++)
        {
            cin >> arr[i];
        }

        // find unique element
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != common)
            {
                cout << i + 1 << endl; // 1-based index
                break;
            }
        }
    }

    return 0;
}

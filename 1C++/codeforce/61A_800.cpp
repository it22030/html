#include <bits/stdc++.h>
using namespace std;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fast_io();

    string A, B, result = "";
    cin >> A >> B;
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        if (A[i] == '1' && B[i] == '1')
        {
            result += '0';
        }
        else if ((A[i] == '1' && B[i] == '0') || (A[i] == '0' && B[i] == '1'))
        {
            result += '1';
        }
        else
            result += '0';
    }
    cout << result << endl;
    return 0;
}

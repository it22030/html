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

    int t;
    cin >> t;

    // Precompute Polycarp's liked numbers
    vector<int> liked_numbers;
    int num = 1;

    // Enough to store first 1000 liked numbers
    while (liked_numbers.size() < 1000)
    {
        if (num % 3 != 0 && num % 10 != 3)
        {
            liked_numbers.push_back(num);
        }
        num++;
    }

    // Process each test case
    while (t--)
    {
        int k;
        cin >> k;
        cout << liked_numbers[k - 1] << endl; // Indexing from 0
    }

    return 0;
}

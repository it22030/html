  
  //2D BY Array /Vector
  #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, a1, a2;
    cin >> n;
    // int arr[n][2];    // arr[R][C]

    vector<vector<int>> arr(n, vector<int>(2));

    // Input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
   }

    // Optional: Print to verify
    cout << "Input matrix:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i][0] << " " << arr[i][1] << endl;
    }

    return 0;
} 


//2D By Pair
  /**  #include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // pair দিয়ে ইনপুট রাখার জন্য vector
    vector<pair<int, int>> stops(n);

    // Input
    for (int i = 0; i < n; ++i) {
        cin >> stops[i].first >> stops[i].second;
    }

    // Output to verify
    cout << "Input matrix:\n";
    for (int i = 0; i < n; i++)
    {
        cout << stops[i].first << " " << stops[i].second << endl;
    }

    return 0;
} **/

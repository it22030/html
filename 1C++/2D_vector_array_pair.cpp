
// 2D BY Array /Vector
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m, h, a1, a2;
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


/*   //2D row,colums both user input  
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;  // n = rows, m = columns
    cin >> n >> m;

    // Create a 2D vector with n rows and m columns
    vector<vector<int>> arr(n, vector<int>(m));

    // Input the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Output the matrix
    cout << "Input matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }  
        cout << endl;
    }

    return 0;
}

*/

//solve 2D related problem 
/*
#include <vector>
#include <algorithm>

using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    
    // Step 1: Transpose the matrix
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    
    // Step 2: Reverse each row
    for (int i = 0; i < n; ++i) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}
*/

// 2D By Pair
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



#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> stops(n, vector<int>(2));

    // Input
    for (int i = 0; i < n; i++)
    {
        cin >> stops[i][0] >> stops[i][1];
    }

    int current_passengers = 0, max_capacity = 0;

    for (int i = 0; i < n; ++i)
    {
        current_passengers -= stops[i][0]; // যারা নামছে
        current_passengers += stops[i][1]; // যারা উঠছে
        max_capacity = max(max_capacity, current_passengers);
    }

    cout << max_capacity << endl;

    return 0;
}



/*   //Easy process

#include<bits/stdc++.h>
using namespace std;

int main() {
  int n,a,b;
    cin >> n;
    int current_passengers = 0, max_capacity = 0;
  // Input
    for (int i = 0; i < n; ++i)
    {
        cin >>a>>b ;
        current_passengers -= a; // যারা নামছে
        current_passengers += b; // যারা উঠছে
        max_capacity = max(max_capacity, current_passengers);
    }

    cout << max_capacity << endl;

    return 0;
}
*/


/**
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<pair<int, int>> stops(n);
  for (int i = 0; i < n; ++i) {
      cin >> stops[i].first >> stops[i].second;
  }

  int current_passengers = 0, max_capacity = 0;

  for (int i = 0; i < n; ++i) {
      current_passengers -= stops[i].first;  // exit
      current_passengers += stops[i].second; // enter

      if (current_passengers > max_capacity) {
          max_capacity = current_passengers;
      }
  }

  cout << max_capacity << endl;
  return 0;
}**/
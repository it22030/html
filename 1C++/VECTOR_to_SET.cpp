/*
#include <iostream>
#include <set>
#include <cmath>
using namespace std;

int main() {
   set<int> s = {3, 5, 7, 9};

   auto it1 = s.begin();
   auto it2 = next(it1);  // it2 = iterator to next element after it1

   while (it2 != s.end()) {
       cout << "Difference between " << *it2 << " and " << *it1 << " is " << abs(*it2 - *it1) << '\n';
       ++it1;
       ++it2;
   }

   return 0;
} */

/*
| Conversion       | Syntax                               | Behavior                                    |
| ---------------- | ------------------------------------ | ------------------------------------------- |
| `vector` → `set` | `set<int> s(v.begin(), v.end());`    | Removes duplicates + sorts                  |
| `set` → `vector` | `vector<int> v(s.begin(), s.end());` | Keeps sorted values (random access enabled) |
*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    int count = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            int diff = abs(arr[i] - arr[j]);
            // cout << "abs(" << arr[i] << "-" << arr[j] << ") = " << diff << endl;
            if (diff <= 2)
            {
                cout << "abs(" << arr[i] << "-" << arr[j] << ") = " << diff << endl;
                count++;
            }
        }
    }

    cout << "Total pairs with difference <= 2: " << count << endl;
    return 0;
}

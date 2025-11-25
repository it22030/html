   //using set  ......>  unique number sort
  /* 
   #include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;  // কতগুলো ইনপুট নেবে

    set<int> s;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);  // set-এ insert
    }

    cout << "Set contains:\n";
    for (int x : s) {
        cout << x << " ";
    }

    return 0;
}
*/

//unorder set ....> unique num not sort ,input sequences maintain

#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_set<int> seen;
    vector<int> unique_ordered;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (seen.count(x) == 0) {
            seen.insert(x);
            unique_ordered.push_back(x);
        }
    }

    for (int x : unique_ordered) {
        cout << x << " ";
    }

    return 0;
}




//unorder set ......> unique number but not sort ,again not maintain sequence
/*
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    unordered_set<int> us;
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        us.insert(x); // ডুপ্লিকেট হলে রাখবে না
    }

    cout << "\nUnique elements in unordered_set:\n";
    for (int x : us) {
        cout << x << " ";
    }

    return 0;
}
*/

  
  
  
  // using multiset
  /*    
#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> ms = {1, 2, 2, 3, 3, 3, 4};

    int total = ms.size();                 // মোট উপাদান
    set<int> unique(ms.begin(), ms.end()); // ইউনিক এলিমেন্ট শুধু এক কপি করে

    int uniqueCount = unique.size();
    int duplicates = total - uniqueCount;

    cout << "Total elements: " << total << endl;
    cout << "Unique elements count: " << uniqueCount << endl;
    cout << "Duplicate count: " << duplicates << endl;

    cout << "\n Unique elements:" << endl;
    for (int x : unique)
    {
        if (ms.count(x) == 1)
        {
            cout << x << endl;
        }
    }

    cout << "\n Duplicate elements:" << endl;
    for (int x : unique)
    {
        if (ms.count(x) > 1)
        {
            cout << x << " (appears " << ms.count(x) << " times)" << endl;
        }
    }

    return 0;
}
*/
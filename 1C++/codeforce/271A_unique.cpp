/*
#include <iostream>
#include <set>
using namespace std;

// Helper function to check if all digits are distinct
bool isDistinct(int num) {
 string str = to_string(num);
 set<char> digits;
 for (char c : str) {
     if (digits.count(c)) return false;
     digits.insert(c);
 }
 return true;
}

int main() {
 int n;
 cin >> n;

 while (true) {
     n++; // Check next number
     if (isDistinct(n)) {
         cout << "Next distinct-digit number: " << n << endl;
         break;
     }
 }

 return 0;
} */

/*
#include <iostream>
#include <string>
using namespace std;

// একটি সংখ্যার সব digit আলাদা কি না চেক করা
bool isDistinct(int n) {
    string s = to_string(n);
    for (int i = 0; i < s.size(); i++) {
        for (int j = i + 1; j < s.size(); j++) {
            if (s[i] == s[j]) return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;     // ইউজার থেকে সংখ্যা ইনপুট নেই

    n++;          // পরবর্তী সংখ্যা থেকে শুরু করব

    while (!isDistinct(n)) {
        n++;      // যতক্ষণ না distinct পাওয়া যায় ততক্ষণ loop
    }

    cout << n << endl;  // প্রথম distinct সংখ্যাটি প্রিন্ট করব

    return 0;
}

*/

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    n++;  // পরবর্তী সংখ্যা থেকে শুরু

    while (true) {
        string s = to_string(n);
        bool is_unique = true;

        for (int i = 0; i < s.size(); i++) {
            for (int j = i + 1; j < s.size(); j++) {
                if (s[i] == s[j]) {
                    is_unique = false;
                    break;
                }
            }
            if (!is_unique) break;
        }

        if (is_unique) {
            cout << n << endl;
            break;
        }

        n++;
    }

    return 0;
}
    */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    n++; // পরবর্তী সংখ্যা থেকে শুরু

    while (true)
    {
        string s = to_string(n);
        int i;
        for (i = 0; i < s.size(); i++)
        {
            for (int j = i + 1; j < s.size(); j++)
            {
                if (s[i] == s[j])
                {
                    goto nextNumber; // একই digit পেলে পরের সংখ্যায় যাও
                }
            }
        }

        // যদি উপরের loop থেকে বের হই, তাহলে এর মানে সব digit ভিন্ন
        cout << n << endl;
        break;

    nextNumber:
        n++; // পরের সংখ্যায় যাও
    }

    return 0;
}

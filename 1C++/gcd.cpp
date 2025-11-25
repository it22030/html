 
 
 /*GCD(Greatest Common Divisor) সবসময় non-negative integer রিটার্ন করে (ধরা হয় GCD ≥ 0)
            GCD ≤ min(a, b)
let,a = 24, b = 36
Step 1: 24 এর গুণনীয়ক (divisors):1, 2, 3, 4, 6, 8, 12, 24
Step 2: 36 এর গুণনীয়ক:1, 2, 3, 4, 6, 9, 12, 18, 36
Step 3: সাধারণ গুণনীয়কগুলো:1, 2, 3, 4, 6, 12
Step 4: সর্বোচ্চ সাধারণ গুণনীয়ক:
✅ GCD(24, 36) = 12
 */

 /*
 #include <iostream>
#include<bits/stdtr1c++.h>
#include <vector>
#include <numeric>  // for __gcd
using namespace std;

int main() {
    vector<int> numbers = {36, 60, 48, 96};

    int g = numbers[0];
    for(int i = 1; i < numbers.size(); ++i) {
        g = __gcd(g, numbers[i]);
      // g = std::gcd(g, numbers[i]);
    }

    cout << "GCD of all numbers is: " << g << endl;
    return 0;
}
    */

    #include<bits/stdtr1c++.h>
    #include <iostream>
#include <numeric>  // for __gcd
using namespace std;

int main() {
    // তিনটি সংখ্যা
    int a = 12, b = 18, c = 24;

    // প্রথমে 12 এবং 18 এর GCD বের করো, তারপর 6 এর সাথে 24 এর GCD বের করো
   int g = __gcd(__gcd(a, b), c);
     // int g = __gcd({a, b, c});.....wrong 

    // GCD আউটপুট করো
    cout << "GCD of " << a << ", " << b << ", and " << c << " is: " << g << endl;

    return 0;
}

/*
#include <iostream>
#include <vector>
#include <numeric>  // for std::gcd
#include <functional>  // for std::reduce
using namespace std;

int main() {
    vector<int> numbers = {12, 18, 24};

    // std::reduce এবং std::gcd ব্যবহার করে GCD বের করো
    int g = reduce(numbers.begin(), numbers.end(), numbers[0], std::gcd<int, int>());

    // GCD আউটপুট করো
    cout << "GCD of all numbers is: " << g << endl;

    return 0;
}
*/



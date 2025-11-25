 // LCM (Least Common Multiple) কী?LCM হলো দুটি বা ততোধিক সংখ্যার মধ্যে সবচেয়ে ছোট সেই সংখ্যা, যা প্রতিটি সংখ্যার গুণিতক (multiple)।

 /* LCM(4, 6) = 12    কারণ:
4-এর গুণিতক: 4, 8, 12, 16, ...
6-এর গুণিতক: 6, 12, 18, 24, ...
কমন গুণিতক = 12, 24, ...
সবচেয়ে ছোট কমন গুণিতক = 12
        
         GCD ও LCM-এর সম্পর্ক: LCM(a,b)= (a×b)/GCD(a,b)
         	LCM ≥ max(a, b)
                 
*/

#include <iostream>
#include<bits/stdtr1c++.h>
#include <numeric> // for __gcd
using namespace std;

int main() {
    int a = 12, b = 18;

    int gcd = __gcd(a, b);
    int lcm = (a * b) / gcd;

    cout << "GCD: " << gcd << endl;
    cout << "LCM: " << lcm << endl;

    return 0;
}

/*  (Multiple numbers এর LCM):
#include<bits/stdtr1c++.h>
#include <iostream>
#include <vector>
#include <numeric> // for gcd
using namespace std;

// 2টি সংখ্যার LCM বের করার ফাংশন
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    vector<int> nums = {12, 15, 20};

    int l = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
        l = lcm(l, nums[i]);
    }

    cout << "LCM of all numbers is: " << l << endl;

    return 0;
}*/
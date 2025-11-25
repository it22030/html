/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cout << "Enter a number to check if it's prime: ";
    cin >> num;

    // 1 থেকে 1000 পর্যন্ত প্রাইম সংখ্যা বের করা
    cout << "Prime numbers from 1 to 1000 are: \n";
    for (int i = 2; i <= 1000; i++) {
        bool isPrime = true;

        // প্রাইম চেক
        for (int j = 2; j <= sqrt(i); ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
    // 1 to 1000 prime number print 
    
        if (isPrime) {
            cout << i << " ";
        }
    }
    cout << endl;

    // ইনপুট করা সংখ্যাটির প্রাইম চেক করা
    bool isPrime = true;
    if (num <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= sqrt(num); ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
*/


#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= num; ++i) { // Check divisors up to the square root of the number
        if (num % i == 0) return false; // If divisible, not prime
    }
    return true; // Otherwise, prime
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}
 /*
 #include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m, n;
    cout << "Enter range (m and n): ";
    cin >> m >> n;

    cout << "Prime numbers between " << m << " and " << n << " are:\n";

    for (int num = m; num <= n; ++num) {
        if (num <= 1) continue;
        if (num == 2) {
            cout << num << " ";
            continue;
        }
        if (num % 2 == 0) continue;

        bool isPrime = true;
        for (int i = 3; i <= sqrt(num); i += 2) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
*/



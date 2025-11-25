#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    // ছোট বা বড় অক্ষর চেক করতে, সব অক্ষরকে lowercase বা uppercase এ রূপান্তর করা হতে পারে
    ch = tolower(ch);  // এটি ছোট অক্ষরে রূপান্তরিত করবে

    // switch ব্যবহার করে Vowel এবং Consonant চেক করা
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << ch << " is a Vowel" << endl;
            break;
        default:
            // যদি অক্ষরটি ভিন্ন কিছু হয় (অক্ষরের বাইরে)
            if ((ch >= 'a' && ch <= 'z')) {
                cout << ch << " is a Consonant" << endl;
            } else {
                cout << "Invalid input, please enter an alphabetic character." << endl;
            }
            break;
    }

    return 0;
}

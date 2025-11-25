
#include <bits/stdc++.h>
 // #include <iostream>
 // #include <cctype>  // tolower() এবং toupper() ফাংশন এর জন্য এই হেডার দরকার
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // Lowercase to Uppercase
    if (islower(ch)) {
        ch = toupper(ch);  // ছোট অক্ষরকে বড় অক্ষরে রূপান্তরিত করা
        cout << "Converted to Uppercase: " << ch << endl;
    }
    // Uppercase to Lowercase
    else if (isupper(ch)) {
        ch = tolower(ch);  // বড় অক্ষরকে ছোট অক্ষরে রূপান্তরিত করা
        cout << "Converted to Lowercase: " << ch << endl;
    }
    else {
        cout << "Invalid input, please enter an alphabetic character." << endl;
    }

    return 0;
}

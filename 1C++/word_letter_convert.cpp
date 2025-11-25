#include <iostream>
#include <cctype>  // tolower(), toupper() ফাংশন এর জন্য
using namespace std;

void convertWord(string& word) {
    for (int i = 0; i < word.length(); i++) {
        // যদি অক্ষরটি lowercase হয়, তাহলে uppercase তে রূপান্তর
        if (islower(word[i])) {
            word[i] = toupper(word[i]);
        }
        // যদি অক্ষরটি uppercase হয়, তাহলে lowercase তে রূপান্তর
        else if (isupper(word[i])) {
            word[i] = tolower(word[i]);
        }
    }
}

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;
    
    // word এর প্রতিটি অক্ষর রূপান্তর করা
    convertWord(word);
    
    // রূপান্তরিত word প্রদর্শন
    cout << "Converted word: " << word << endl;
    return 0;
}

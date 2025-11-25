#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s); 

    // প্রথমে সব ক্যারেক্টার কে ছোট হাতের (lowercase) করবো
    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }

       // তারপর space এবং dot বাদ দিয়ে নতুন string বানাবো
       string clean = "";
       for (char ch : s)   //ch~ch হলো একটা temporary variable যা s স্ট্রিংয়ের প্রতিটি ক্যারেক্টারের মান রাখবে
                   //: = "for each" বা "প্রতি" বোঝায়।  /// s এর প্রতিটি ক্যারেক্টার ধরে ধরে ch এর মধ্যে রাখো।
       {  if (ch != ' ' && ch != '.') {
               clean += ch;
           }
       } 

    // clean string sort করবো
    sort(clean.begin(), clean.end());//Decending order Sort:sort(clean.begin(), clean.end(),greater< char>());

    sort(s.begin(),s.end()); // sort with dot and spaces , মূল string এর sort 

    cout << "Sorted string with spaces and dots: " << s << endl;  // spaces,dot,num,letter
    cout << "Sorted string without spaces and dots: " << clean << endl;


 

    //	যদি ch একটা letter হয় (A-Z বা a-z), তাহলেই clean এ যোগ করবো
    string clean1 = "";
    for (char ch : s) {
        if (isalpha(ch)) {
            clean1 += ch;
        }
    }
    sort(clean1.begin(),clean1.end());
    cout << "Sorted string with only alphabets: " << clean1 << endl;

    return 0;
}

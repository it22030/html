/*#include<iostream>
using namespace std;

main()
{
    string s;
    int u=0,l=0;
    cin >> s;
    for(char c:s)(isupper(c)?u++:l++);
    for(char c:s)cout<<char((u>l)?toupper(c):tolower(c));
}

#include<iostream>
#include<vector>
using namespace std;

main() {
    string s;
    cin >> s;
    vector<int> freq(256, 0);

    for(char c : s) freq[c]++;

    for(int i = 0; i < 256; i++) if(freq[i]) cout << (char)i << " : " << freq[i] << endl;

    for(int i = 0; i < 256; i++)
        while(freq[i]--)
            cout << char(i);
}*
#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cin >> s;  // ইনপুট স্ট্রিং নাও

    // স্ট্রিংয়ের সব ক্যারেক্টার ছোট অক্ষরে রূপান্তর
    for(char &c : s) {
        c = tolower(c);  // প্রতিটি ক্যারেক্টারকে ছোট অক্ষরে রূপান্তর
    }

    cout << s << endl;  // রূপান্তরিত স্ট্রিং প্রিন্ট করা
    return 0;
}


#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cin >> s;  // ইনপুট স্ট্রিং নাও

    // স্ট্রিংয়ের সব ক্যারেক্টার ছোট অক্ষরে প্রিন্ট
    for(char c : s) {
        cout << char(tolower(c));  // শুধুমাত্র ছোট অক্ষরে প্রিন্ট
    }

    cout << endl;  // এক লাইনে প্রিন্ট হবে
    return 0;
}*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e, max;
    cin >> a >> b >> c >> d >> e;

    cout << "Max_number:" << " ";

    max = a > b   ? a > c   ? a > d   ? a > e ? a : e
                              : d > e ? d
                                      : e
                    : c > d ? c > e ? c : e
                    : d > e ? d
                            : e
          : b > c ? b > d   ? b > e ? b : e
                    : d > e ? d
                            : e
          : c > d ? c > e ? c : e
          : d > e ? d
                  : e;

    cout << max << endl;

    return 0;
}

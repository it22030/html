#include <iostream>
#include <string>
#include <vector>
using namespace std;

string countsort(string str)
{
    vector<int> freq(256, 0); // সব ক্যারেক্টার ASCII অনুযায়ী ধরার জন্য

    // Frequency count
    for (int i = 0; i < str.length(); i++)
    {
        freq[str[i]]++; // char হলো একধরনের ছোট ইন্টিজার (ASCII value ধরে)। //freq[(unsigned char)str[i]]++;
    }

    // ফ্রিকোয়েন্সি প্রিন্ট
    cout << "Character frequencies:\n";
    for (int i = 0; i < 256; i++) // 256:freq(256) নিচ্ছি কারণ ASCII-তে ০-২৫৫ পর্যন্ত সব ক্যারেক্টার থাকে।
    {
        if (freq[i] > 0)
        {
            if (i == ' ')
                cout << "'space'" << " : " << freq[i] << endl;

            else if (i == '\t')
                cout << "'tab'" << " : " << freq[i] << endl;
                    
            else if (i == '\n')
                cout << "'newline'"<< " : " << freq[i] << endl;
                     
            else
                cout << "'" << (char)i << "' : " << freq[i] << endl; //"'" → স্ট্রিং, যার মধ্যে একটা single quote (') আছে
                //' চিহ্ন (single quote) দিতেই হবে।  
        }
    }

    // Sorted string
    int j = 0;
    for (int i = 0; i < 256; i++)
    {
        while (freq[i]--)
        {
            str[j++] = (char)i;
        }
    }

    return str;
}

int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str); // পুরো লাইন ইনপুট নিবে (space সহ)
    cout << "Sorted string: " << countsort(str) << endl;
    return 0;
}

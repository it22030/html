
#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string (lowercase letters only): ";
    getline(cin, str);

    int freq[26] = {0}; // 'a' to 'z' frequency array
    char order[26];     // অক্ষর আসার ক্রম ধরে রাখবে (distinct only)
    int order_len = 0;

    // Frequency count & order capture
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z')
        {
            int idx = ch - 'a';
            if (freq[idx] == 0)
            {
                order[order_len] = ch;
                order_len++;
            }
            freq[idx]++;
        }
    }

    // Frequency print
    cout << "\nCharacter frequencies:\n";
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            char ch = i + 'a';
            cout << ch << " = " << freq[i] << endl;
        }
    }

    // Sorted string (distinct letters)
    string sorted = "";
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            sorted += (char)(i + 'a');
        }
    }

    // Count unique and duplicate characters
    int unique_count = 0, duplicate_count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 1)
            unique_count++;
        else if (freq[i] > 1)
            duplicate_count += freq[i];
    }

    // Unsorted outputs
    string unsorted_distinct = "";
    string unsorted_duplicates = "";
    string unsorted_uniques = "";

    for (int i = 0; i < order_len; i++)
    {
        char ch = order[i];
        int idx = ch - 'a';

        unsorted_distinct += ch;

        if (freq[idx] == 1)
            unsorted_uniques += ch;
        else if (freq[idx] > 1)
            unsorted_duplicates += ch;
    }

    // Final Outputs
    cout << "\nSorted string (distinct): " << sorted << endl;
    cout << "Number of unique characters: " << unique_count << endl;
    cout << "Number of duplicate characters: " << duplicate_count << endl;

    cout << "\nUnsorted distinct letters (input order): " << unsorted_distinct << endl;
    cout << "Duplicate letters (unsorted): " << unsorted_duplicates << endl;
    cout << "Unique letters (unsorted): " << unsorted_uniques << endl;

    return 0;
}

// using inbuid function +STL
/*
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string (lowercase letters only): ";
    getline(cin, str);

    unordered_map<char, int> freq;        // অক্ষরের ফ্রিকোয়েন্সি
    unordered_set<char> seen;             // ইনপুট অনুযায়ী যেগুলো আগে দেখা হয়নি
    vector<char> input_order;             // ইনপুট অনুযায়ী অক্ষর রাখার জন্য

    // ফ্রিকোয়েন্সি কাউন্ট + ইনপুট অর্ডার ধরে রাখা
    for (char ch : str)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            freq[ch]++;
            if (seen.find(ch) == seen.end())
            {
                input_order.push_back(ch);
                seen.insert(ch);
            }
        }
    }

    // Frequency print
    cout << "\nCharacter frequencies:\n";
    for (auto &p : freq)
    {
        cout << p.first << " = " << p.second << endl;
    }

    // Sorted distinct string
    string sorted = "";
    for (int i = 0; i < 26; i++)
    {
        char ch = 'a' + i;
        if (freq[ch] > 0)
            sorted += ch;
    }

    // Count unique and duplicate letters
    int unique_count = 0, duplicate_count = 0;
    for (auto &p : freq)
    {
        if (p.second == 1)
            unique_count++;
        else if (p.second > 1)
            duplicate_count += p.second;
    }

    // Unsorted outputs
    string unsorted_distinct = "";
    string unsorted_duplicates = "";
    string unsorted_uniques = "";

    for (char ch : input_order)
    {
        unsorted_distinct += ch;

        if (freq[ch] == 1)
            unsorted_uniques += ch;
        else if (freq[ch] > 1)
            unsorted_duplicates += ch;
    }

    // Final outputs
    cout << "\nSorted string (distinct): " << sorted << endl;
    cout << "Number of unique characters: " << unique_count << endl;
    cout << "Number of duplicate characters: " << duplicate_count << endl;

    cout << "\nUnsorted distinct letters (input order): " << unsorted_distinct << endl;
    cout << "Duplicate letters (unsorted): " << unsorted_duplicates << endl;
    cout << "Unique letters (unsorted): " << unsorted_uniques << endl;

    return 0;
}*/

/*
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string (lowercase letters only): ";
    getline(cin, str);

    vector<int> freq(26, 0); // 'a' to 'z'

    // Frequency count
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z') // শুধু ছোট হাতের অক্ষরের জন্য
            freq[str[i] - 'a']++;
    }

    // Frequency print
    cout << "Character frequencies:\n";
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            char ch = i + 'a';
            cout << "'" << ch << "' : " << freq[i] << endl;
        }
    }

    // Sorted unique string বানানো
    string sorted = "";
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            sorted += (char)(i + 'a');
        }
    }

    // সংখ্যা নির্ণয়
    int count = sorted.size();

    cout << "Sorted string (distinct lowercase only): " << sorted << endl;
    cout << "Number of unique lowercase characters: " << count << endl;

    return 0;
}*/

#include <iostream>
#include <set>
using namespace std;

bool isDistinct(const string &str)
{
    set<char> unique_chars;

    // Insert each character into the set
    for (char c : str)
    {
        unique_chars.insert(c);
    }

    // If set size equals the string length, all characters are unique
    return unique_chars.size() == str.size();
}

int main()
{
    string str;
    cin >> str;
    str += '1';
    if (isDistinct(str))
    {
        cout << "All characters are distinct." << endl;
    }
    else
    {
        cout << "There are duplicate characters." << endl;
    }

    return 0;
}

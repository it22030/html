#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "Enter a word: ";
    cin >> s;
    int upper = 0, lower = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            upper++;
        }
        else
        //(s[i] >= 'a' && s[i] <= 'z')
        {
            lower++;
        }
    }

    cout << "Uppercase letters: " << upper << endl;
    cout << "Lowercase letters: " << lower << endl;

    if (lower >= upper)
    {
        for (int i = 0; i < s.size(); i++)
        {

            s[i] = tolower(s[i]);
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = toupper(s[i]);
        }
    }

    cout << s << endl;

    return 0;
}

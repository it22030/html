#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;

        string result = "";

        for (int i = 0; i < s.length(); i += 2)
        {
            // প্রথম অক্ষর সবসময় রাখব
            if (i == 0)
            {
                result += s[i];
            }
            else
            {
                // আগের লাস্ট অক্ষর আর এখনকার প্রথম অক্ষর যদি same না হয়
                if (result.back() != s[i])
                {
                    result += s[i];
                }
            }

            // দ্বিতীয় অক্ষর থাকলে সেটাও রাখব
            if (i + 1 < s.length())
            {
                result += s[i + 1];
            }
        }

        cout << result << endl;
    }

    return 0;
}

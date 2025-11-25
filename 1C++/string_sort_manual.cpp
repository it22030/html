#include <iostream>
#include <string>
#include <vector>
using namespace std;

string countsort_lowercase(string str)
{
    vector<int> freq(26, 0); // শুধুমাত্র 'a' to 'z' (26 টি) অক্ষরের জন্য

    // Frequency count
    for (int i = 0; i < str.length(); i++)
    {
        //if (str[i] >= 'a' && str[i] <= 'z') // শুধু ছোট হাতের অক্ষর
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

    // Sorted string বানানো
    string result = "";
    for (int i = 0; i < 26; i++)
    {
        //while (freq[i]--) ................>> সকল স্ট্রিং একের অধিকসহ প্রিন্ট 
        if(freq[i]>0 || freq[i]==1)   //.........>>শুধু অনন্য(distinct number) print
        {
            result += (char)(i + 'a');
           
        }
    }
 
    return result;
}

int main()
{
    string str;
    cout << "Enter a string (lowercase letters only): ";
    getline(cin, str);

    string sorted = countsort_lowercase(str);
    int count=0;
    count=sorted.size();

    cout << "Sorted string (a-z only): " << sorted << endl;
    cout << "Sorted string num_char: " << count << endl;

    return 0;
}

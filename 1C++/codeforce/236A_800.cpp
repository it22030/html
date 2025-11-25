#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    
    //frequency
    vector<int> freq(26, 0);
    for (int i = 0; i < str.size(); i++)
    {
        freq[str[i] - 'a']++;
    }
    // sort
    string resstr = "";
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0 || freq[i] == 1)
        {
            resstr += char(i + 'a');
        }
    }
    // cout<<"output:"<<resstr<<endl;
    int alpha = 0;
    alpha = resstr.size();
    // cout<<alpha<<endl;
    if (alpha % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
        cout << "IGNORE HIM!" << endl;
    return 0;
}

/**
 #include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);  // ইউজার ইনপুট নেওয়া

    vector<int> freq(26, 0);  // 'a' to 'z' অক্ষরের জন্য ফ্রিকোয়েন্সি অ্যারে

    // ফ্রিকোয়েন্সি গণনা
    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') // শুধু ছোট হাতের অক্ষর
            freq[str[i] - 'a']++;
    }

    // ইউনিক অক্ষর গুনে দেখা
    int unique = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0)
            unique++;
    }

    // চেক করা – জোড় না বিজোড়
    if (unique % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
**/

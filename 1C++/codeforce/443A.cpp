#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fast_io();

    string str;
    set<char> s;
    getline(cin, str);
    int size = str.size(); // cout<<str.size()<<endl;
    if (size == 2)
        cout << 0 << endl;
    else if (size == 3)
        cout << 1 << endl;

    else
    {
        for (int i = 1; i < str.size() - 1; i++)
        {
            // if(str[i]!='{' ||str[i]!='}' || str[i]!=' ' || str[i]!=',' )
           // if(isalpha(str[i])) //...>just result print
            s.insert(str[i]); // set-এ insert
        }
        int result = s.size();
        cout << result-2 << endl;
    }

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s); // পুরো লাইন ইনপুট নিতে

    set<char> letters;

    for (char c : s) {
        if (isalpha(c)) { // ছোট হাতের অক্ষর হলে সেট-এ রাখো
            letters.insert(c);
        }
    }

    cout << letters.size() << endl;

    return 0;
}


*/
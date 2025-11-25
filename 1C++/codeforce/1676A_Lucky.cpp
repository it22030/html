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
    int t;
    cin >> t;
    vector<string> nstr(t);
    for (int i = 0; i < t; i++)
    {
        cin >> nstr[i];

        string firstPart = nstr[i].substr(0, 3);
        string secondPart = nstr[i].substr(3);
        // int num1 = stoi(firstPart);    int num2 = stoi(secondPart);// wrong >one index of one int
        int first = 0, second = 0;
        for (int j = 0; j < 3; j++)
        {
            first += firstPart[j];  //ASCII add
            second += secondPart[j];  //ASCII add

            /* first += firstPart[j] - '0';
               second += secondPart[j] - '0';  */ //numeric add
        }
        if (first == second)
            cout << "YES" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}

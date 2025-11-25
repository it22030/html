#include <iostream>
using namespace std;

int main()
{
    int n, n2, temp;
    // cout << "Enter a number: ";
    cin >> n >> n2;

    int next = n + 1;

    while (true)
    {
        bool isPrime = true;
        for (int i = 2; i * i <= next; i++)
        {
            if (next % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            // cout << "Next prime number after " << n << " is: " << next << endl;
            temp = next;
            break;
        }
        next++;
    }

    if (temp == n2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

/*  //wrong ....next prime ki na check kore na 
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
    int a,b;
    cin >>a>>b;

       for (int i = 2; i <= 50; i++) {
        bool isPrime = true;

        // প্রাইম চেক
        for (int j = 2; j <= sqrt(i); ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }}

          bool isPrime = true;
    if (b <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= sqrt(b); ++i) {
            if (b % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout <<"YES" << endl;
    } else {
        cout << "NO" << endl;
    }



    return 0;
}
*/
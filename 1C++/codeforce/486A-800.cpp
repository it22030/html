/*
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fast_io();

    long long t; int result=0;
    cin>>t;
  for(int i=1;i<=t;i++) {
        if(i%2!=0){
            result+=(-i);
        }else result+=i;
    }
 cout<<result<<endl;
    return 0;
}
*/

// cp_template.cpp

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

    long long n;
    cin >> n;

    if (n % 2 == 0)   
    {
        cout << n / 2 << endl;
    }
    else
    {
        cout << -(n + 1) / 2 << endl;
    }

    return 0;
}

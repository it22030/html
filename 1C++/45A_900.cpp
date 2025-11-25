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
   string month[12]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
     string input_month;
    cin >> input_month;
    int n; cin>>n;

    int index = -1;
    for (int i = 0; i < 12; i++) {
        if (month[i] == input_month) {
            index = i;
            break;
        }
    } 
    // int new= (index+n)%12; 
   cout<<month[(index+n)%12];
   
   
    return 0;
}

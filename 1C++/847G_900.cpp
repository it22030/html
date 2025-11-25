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
    int T;
    cin >> T;
    string a; int count=0,slots[7]={0};
    while(T--){
     cin>>a; 
     for(int i=0;i<7;i++){
        if(a[i]=='1') slots[i]++;
     }
    }  int max_rooms = *max_element(slots, slots + 7);
    cout << max_rooms << endl;

    return 0;
}

/*
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int slots[7] = {0};

    for (int g = 0; g < n; g++) {
        string a;
        cin >> a;
        for (int i = 0; i < 7; i++) {
            if (a[i] == '1') {
                slots[i]++;
            }
        }
    }

    int max_rooms = *max_element(slots, slots + 7);
    cout << max_rooms << endl;
    return 0;
}
*/
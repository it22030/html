// using string vector
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
  int n,count=0;
  //string str;
  vector<string>str;  // not use char vector because 10 is two char
  cin>>n;  string s;
  for(int i=0;i<n;i++){
  cin>>s;
  str.push_back(s);
  }
  for(int i=0;i<n-1;i++){
   if(str[i]!=str[i+1]){
    count++; //cout<<"c:"<<count<<" ";
   }
  } cout<<(count+1)<<endl;

    return 0;
}*/

// without vector
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, groups = 1; // প্রথম magnet থাকবেই, তাই শুরুতে 1 group ধরেছি
    string prev, curr;

    cin >> n >> prev; // প্রথম magnet ইনপুট

    for (int i = 1; i < n; ++i)
    {
        cin >> curr;
        if (curr != prev)
        {
            groups++; // ভিন্ন configuration → নতুন group
        }
        prev = curr;
    }

    cout << groups << '\n';
    return 0;
}

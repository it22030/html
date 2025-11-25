
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push\_back
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
int m,n,count;
string str1,str2,str;
cin>>str1>>str2>>str;
 str1+=str2; //cout<<str1<<endl;

 // m=str1.size(); n=str.size();
 sort(str1.begin(),str1.end());
 sort(str.begin(),str.end());
 //cout<<str1<<endl; cout<<str<<endl;
if(str1==str) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
   
return 0;
}

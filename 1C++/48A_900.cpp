
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
   vector<string>s(3);
   for(int i=0;i<3;i++){
       cin>>s[i];
   }
     if((s[1]==s[2] && s[0]!=s[1]) && ((s[0]=="rock" && s[1]=="scissors") || (s[0]=="scissors" && s[1]=="paper") || (s[0]=="paper" && s[1]=="rock")) )
        cout<<"F"<<endl;
       else if((s[0]==s[2] && s[0]!=s[1]) && ((s[1]=="rock" && s[0]=="scissors") || (s[1]=="scissors" && s[0]=="paper") || (s[1]=="paper" && s[0]=="rock")))
        cout<<"M"<<endl;
       else if((s[1]==s[0] && s[0]!=s[2]) && ((s[2]=="rock" && s[1]=="scissors") || (s[2]=="scissors" && s[1]=="paper") || (s[2]=="paper" && s[1]=="rock")) )
         cout<<"S"<<endl;
       else cout<<"?"<<endl;

    return 0;
}


/*#include<iostream>
using namespace std;
string s,a;
int main(){
	for(;cin>>a;s+=a[0]);
	cout<<(s=="prr"||s=="rss"||s=="spp"?'F':s=="rpr"||s=="srs"||s=="psp"?'M':s=="rrp"||s=="ssr"||s=="pps"?'S':'?');
}*/
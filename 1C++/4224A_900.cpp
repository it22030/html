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
    int T,count=0,count_x=0,target;
    cin >> T;
    string s,result="";    //&& count_x > target
    cin>>s;
    for(int i=0;i<T ;i+=2){
        if((s[i]=='x'&& s[i+1]=='x')){
           //result+='X'+s[i+1]; // ASCII value add korbe 
           result+=string("X")+s[i+1]; 
          // result += "X";  result += s[i+1];
          count++;
        } else if(s[i]=='X' && s[i+1]=='X'){
           // result+='x'+s[i+1];
           //  result+=string("x")+s[i+1];
           result += "x"; result += s[i+1];
           count++;
        }
        else { //result+=s[i]+s[i+1];
             result += s[i];  result += s[i+1];
            }
    }
    cout<<count<<endl;
    cout<<result<<endl;
    

    return 0;
}


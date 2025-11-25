// cp\_template.cpp

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
int t,n,count=1;
cin>>t>>n;


for(int i=1;i<=t;i++){
    
    if(i%2!=0){for(int j=0;j<n;j++)
      cout<<"#"; }
      else {
        if(count%2!=0){for(int j=0;j<n-1;j++) cout<<"."; cout<<"#"; }
        else {cout<<"#";for(int j=0;j<n-1;j++) cout<<".";}  count++;
      
    } cout<<endl;
    
}
return 0;
}


/*
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
    int t,n,count=1;
    cin>>t>>n;
    
    for(int i=0;i<t;i++){
       if(i%2==0){
        for(int j=0;j<n;j++){
            cout<<"#";
        } 
       } else{
        if((i/2)%2==0){
        for(int j=0;j<n-1;j++) cout<<".";
        cout<<"#";
      }
      else {
        cout<<"#";
        for(int j=1;j<n;j++) cout<<".";
      }
       }  cout<<endl;

    }
       

    return 0;
}*/

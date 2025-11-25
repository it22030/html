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
    long long t,n;
    cin>>t;
    
    for(int i=0;i<t;i++){
        cin>>n;
        if(n%2!=0){
         n/=2;
        } else {n-=1; n/=2;}
        cout<<n<<endl; 
    } 
    

    return 0;
}

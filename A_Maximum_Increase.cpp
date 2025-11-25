#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'

//void solve() {   }

signed main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    //solve();
    int n,num=-1,cnt=0,max=0,a;  
    cin >> n;
    //vector<int>a(n);
    
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>num){cnt++;   }
        else { 
           if(max<cnt)max=cnt; 
            cnt=1;}
        num=a; 
       
    }     if(max<cnt)max=cnt;
    cout<<max<<endl;
}


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
int t,count=0;
cin>>t;
int arr[t];
for(int i=0;i<t;i++){
   cin>>arr[i];
}

for(int i=0;i<t;i++){
    if(arr[i]==-1 ) count++;
    else if(arr[i]>=1){
        arr[i+1]+=arr[i];
    }
} cout<<count<<endl;

/*// best way for solve
 int police = 0, crimes = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x == -1) {
            if (police > 0) police--;
            else crimes++;
        } else {
            police += x;
        }
    }
    cout << crimes << '\n';
*/

  return 0;
}

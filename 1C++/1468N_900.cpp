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

  while (T--){
    vector<int>container(3,0);
    vector<int>item(5,0);
    vector<int>res(3);
    for(int i=0;i<3;i++){
        cin>>container[i];
      //cout<<container[i]<<" ";
      
    }
    for(int i=0;i<5;i++){
        cin>>item[i];
     //cout<<item[i]<<" ";
    }
    //for(int i=0;i<5;i++){
    if(container[0]<item[0] || container[1]<item[1] || container[2]<item[2]) {
        cout<<"NO"<<endl;
    }
  else {
        int a1=container[0]-item[0];    //cout<<a1<<" "; 
        int a2=container[1]-item[1];   //cout<<a2<<" ";
        int a3=container[2]-item[2];  //cout<<a3<<" ";

        item[3]-=min(a1,item[3]);   
        item[4]-=min(a2,item[4]);

     if(item[3]+item[4]<=a3)
     cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
    }
}
  
  
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int c1, c2, c3;
        cin >> c1 >> c2 >> c3;
        int a1, a2, a3, a4, a5;
        cin >> a1 >> a2 >> a3 >> a4 >> a5;

        // Step 1: Direct wastes
        if (a1 > c1 || a2 > c2 || a3 > c3) {
            cout << "NO\n";
            continue;
        }

        c1 -= a1;
        c2 -= a2;
        c3 -= a3;

        // Step 2: Partially paper (a4)
        int from_c1 = min(c1, a4);
        a4 -= from_c1;
        // বাকিটা c3 এ যাবে

        // Step 3: Partially plastic (a5)
        int from_c2 = min(c2, a5);
        a5 -= from_c2;
        // বাকিটা c3 এ যাবে

        if (a4 + a5 <= c3) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
*/
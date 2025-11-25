
/*#include<bits/stdc++.h>
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
int a,b,c; long long t;
cin>>t;
for(int i=0;i<t;i++){
cin>>a>>b>>c;

if(a>b&&a>c){ if(b+c==a)cout<<"YES"<<endl; else cout<<"NO"<<endl;}
else if(b>a&&b>c) {if(a+c==b) cout<<"YES"<<endl;else cout<<"NO"<<endl;}
else{if(a+b==c)cout<<"YES"<<endl;else cout<<"NO"<<endl;}

}
  return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fast_io();
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b == c || a + c == b || b + c == a)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fast_io();
    int t;
    cin >> t;
    while (t--) {
        vector<int> a(3);
        cin >> a[0] >> a[1] >> a[2];
        sort(a.begin(), a.end());  // sort the array
        if (a[0] + a[1] == a[2]) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

*/

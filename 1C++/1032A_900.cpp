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
    int n,k;
    cin >>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    vector<int>freq(101,0);
    for(int i=0;i<n;i++) freq[a[i]]++;
         
  /*
      cout << "Character frequencies:\n";
    for (int i = 0; i <= 100; i++)
    {   if (freq[i] > 0)
        {int fr = i ;
           cout << "'" << fr << "' : " << freq[i] << endl;
        } } */

        set<int> s;
        for (int i = 0; i < n; i++) {
        s.insert(a[i]);
           }
        int max_freq = *max_element(freq.begin(), freq.end());
      /*
           cout << "Maximum number is: " << max_freq << endl;
           cout<<ceil((double)max_freq/k)<<endl;
            cout<<s.size()<<endl;*/

         //  int result=(ceil(1.0*max_freq/k)*(s.size())*k) -n;
          // cout<<result<<endl;
           cout<<(ceil(1.0*max_freq/k)*(s.size())*k) -n<<endl;
    

    return 0;
}

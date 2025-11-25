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

    int n, count = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            count++;
        }
    }
    cout << count << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = n - 2; i > 0; i--)
    {
        if (arr[i] > arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
            count++;
        }
    }
    cout << count << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    /* int n,prev,aft,count=0;
     cin>>n; cin>>prev;
     for(int i=0;i<n-1;i++){
         cin>>aft;
         if(prev<aft){
             swap(prev,aft);count++; prev=aft;
         }

     } cout<<count<<endl;*/

    return 0;
}
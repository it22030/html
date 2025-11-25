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

    int arr[4], count = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 4); // for(int i = 0; i < 4; i++){cout << arr[i] << " ";}
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

/*
  #include<bits/stdc++.h>

using namespace std;

int main(){

    set<int> s;
    for(int i=0; i<4; i++){
        int temp;
        cin>>temp;
        s.insert(temp);
    }

    cout<<4-s.size()<<endl;
    return 0;
}
*/
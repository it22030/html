 

 #include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
int p,q;
int main() {
    fast_io();

    int n, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        //int p, q;
        cin >> p >> q;
        if (q - p >= 2) {
            count++;
        }
    }  

    cout << count << '\n';
    return 0;
}
 
 
 //using 2D vector .....> memory wast
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

    int n, empty_count = 0;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(2));

    // Input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] != arr[i][1])
        {
            // seat=arr[i][1]-arr[i][0];
            if (arr[i][1] - arr[i][0] >= 2)
            {
                empty_count++;
            }
        }
    }
    if (empty_count != 0)
    {
        cout << empty_count << endl;
    }
    else
        cout << '0' << endl;
    return 0;
}*/
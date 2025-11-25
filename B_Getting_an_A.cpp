/*
#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
#define all(v) (v).begin(), (v).end()
#define endl '\n'

int main()
{
    fastio;

    int t, rst = 0;
    cin >> t;
    float sum=0, avg;
    vector<int> a(t);
    // while (t--) {  }
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    avg = sum / t;
    if (avg >= 4.5)
        cout << "0" << endl;
    else
    {
        sort(a.begin(), a.end());
        for (int i = 0; i < t; i++)
        {
              rst++;
              sum += (5 - a[i]);
            avg = sum / t;
            if (avg >= 4.5)
            {
                cout << rst << endl;
                return 0;
            }
        }
    }
    return 0;
}
    */

    #include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define all(v) (v).begin(), (v).end()
#define endl '\n'

int main() {
    fastio;

    int n;
    cin >> n;
    vector<int> a(n);
    double sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    sort(a.begin(), a.end()); 

    int ans = 0;
    while (sum / n < 4.5) {
        sum += (5 - a[ans]); 
        ans++;
    }

    cout << ans << endl;
    return 0;
}

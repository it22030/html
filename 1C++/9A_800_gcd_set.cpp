#include <bits/stdc++.h>
using namespace std;

void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fast_io();

    int y, w, d, ma;
    cin >> y >> w;

    set<int> point = {1, 2, 3, 4, 5, 6};
    ma = max(y, w);
    auto it = point.lower_bound(ma);
    int count = distance(it, point.end());
    // cout<<count<<endl;
    int g = __gcd(count, 6); // সহজ করবার জন্য
    cout << count / g << "/" << 6 / g << endl;

    /* int Y, W;
     cin >> Y >> W;
     int highest = max(Y, W);
     int favorable = 6 - highest + 1;
     int total = 6;

     int g = __gcd(favorable, total);  // Simplify the fraction

     cout << (favorable / g) << "/" << (total / g) << endl;
   */

    return 0;
}

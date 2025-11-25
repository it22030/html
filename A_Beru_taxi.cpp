 #include <bits/stdc++.h>
 using namespace std;
 
 #define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 #define ll long long
 #define all(v) (v).begin(), (v).end()
 #define endl '\n'
 
 int main() {
     fastio;
     
      double a, b;
    cin >> a >> b;

    int n;
    cin >> n;

    double ans = 1e18; // very large number

    while (n--) {
        double x, y, v;
        cin >> x >> y >> v;

        double dx = x - a;
        double dy = y - b;

        double dist = sqrt(dx*dx + dy*dy);
        double time = dist / v;

        ans = min(ans, time);
    }

    cout << fixed << setprecision(20) << ans << endl;

    return 0;
 }
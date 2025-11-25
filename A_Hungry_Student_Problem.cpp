#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        bool ok = false;

        // Try subtracting 3 multiple times and check if remaining is divisible by 7
        for (int i = 0; i <= 100; i++) {
            if (3*i > x) break;
            if ((x - 3*i) % 7 == 0) {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }
}

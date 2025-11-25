#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int sum = 0;
        for (int i = 0; i < 10; i++) {
            string s;
            cin >> s;
            for (int j = 0; j < 10; j++) {
                if (s[j] == 'X') {
                    int score = min({i + 1, 10 - i, j + 1, 10 - j});
                    sum += score;
                }
            }
        }
        cout << sum << "\n";
    }
}

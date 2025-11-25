#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, h, m;
    cin >> x >> h >> m;

    int presses = 0;

    while (true) {
        int temp_h = h;
        int temp_m = m;
        bool found_seven = false;

        // Check if hour has 7
        while (temp_h > 0) {
            if (temp_h % 10 == 7) {
                found_seven = true;
                break;
            }
            temp_h /= 10;
        }

        // Check if minute has 7
        if (!found_seven) {
            while (temp_m > 0) {
                if (temp_m % 10 == 7) {
                    found_seven = true;
                    break;
                }
                temp_m /= 10;
            }
        }

        if (found_seven) break;

        // Back x minutes
        m -= x;
        presses++;

        if (m < 0) {
            m += 60;
            h--;
        }

        if (h < 0) {
            h = 23;
        }
    }

    cout << presses << endl;
    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;

// ফাংশন: কোনো সংখ্যায় ৭ আছে কিনা
bool has_seven(int n) {
    while (n > 0) {
        if (n % 10 == 7) return true;
        n /= 10;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, h, m;
    cin >> x >> h >> m;

    int presses = 0;

    // যতক্ষণ না lucky সময় পাই
    while (!has_seven(h) && !has_seven(m)) {
        presses++;
        m -= x;
        if (m < 0) {
            m += 60;
            h--;
            if (h < 0) h = 23;
        }
    }

    cout << presses << '\n';
    return 0;
}
*/
#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int cnt = 0;
    for (char c : s) {
        if (c == '#') {
            cnt++;
            if (cnt >= k) {
                cout << "NO" << endl;
           return 0; //🔁main function থেকে বের হয়ে যাও এখনই, কারণ কাজ শেষ
            }
        } else {
            cnt = 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}

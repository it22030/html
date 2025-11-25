#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // যদি n == 1 অথবা n == 2 হয়, তাহলে counter-example দেয়া সম্ভব না
    if (n <= 2) {
        cout << -1 << endl;
    } else {
        // descending order দেয়া safe, Valera ঠিকভাবে sort করতে পারবে না
        for (int i = n; i >= 1; --i)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

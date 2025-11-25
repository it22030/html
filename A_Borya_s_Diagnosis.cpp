// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false); 
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     int curr_day = 0;

//     while (n--) {
//         int s, d;
//         cin >> s >> d;

//         while (s < curr_day) {
//             s += d;
//         }

//         curr_day = s;
//     }

//     cout << curr_day << '\n';
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int n;
    cin >> n;

    int curr_day = 0;

    while (n--) {
        int s, d;
        cin >> s >> d;

        curr_day++; // আগের দিন শেষ, নতুন ডাক্তার দেখতে গেলে পরের দিন লাগবেই

        while (s < curr_day) {
            s += d;
        }

        curr_day = s;
    }

    cout << curr_day << '\n';
    return 0;
}

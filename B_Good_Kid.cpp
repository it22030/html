// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define pb push_back
// #define all(v) (v).begin(), (v).end()
// #define endl '\n'

// signed main() {
//     cin.tie(NULL);
//     ios::sync_with_stdio(false);

//     int t;  
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         int a[n];
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         vector<ll> sum;

//         for (int i = 0; i < n; i++) {
//             ll SP = 1;

//             // মূল array এর কপি নিচ্ছি
//             int temp[n];
//             for (int j = 0; j < n; j++) {
//                 temp[j] = a[j];
//             }

//             // i-th সংখ্যাকে 1 বাড়াচ্ছি
//             temp[i] += 1;

//             for (int j = 0; j < n; j++) {
//                 SP *= temp[j];
//             }

//             sum.pb(SP);
//         }

//         ll maxValue = *max_element(all(sum));
//         cout << maxValue << endl;
//     }
// }


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll maxProduct = 0;

        for (int i = 0; i < n; i++) {
            vector<int> temp = a;  //➡️ temp হল a এর একটি নতুন কপি
                                   
            temp[i] += 1;          
            ll prod = 1;
            for (int x : temp) {
                prod *= x;
            }

            maxProduct = max(maxProduct, prod);
        }

        cout << maxProduct << endl;
    }

    return 0;
}

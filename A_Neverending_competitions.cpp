#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string home;
    cin >> home;

    int out_count = 0, in_count = 0;

    for (int i = 0; i < n; ++i) {
        string flight;
        cin >> flight;

        string from = flight.substr(0, 3);
        string to = flight.substr(5, 3);

        if (from == home) out_count++;
        if (to == home) in_count++; 
    }

    //cout << out_count << " " << in_count << endl;

    if (out_count == in_count)
        cout << "home" << endl;
    else
        cout << "contest" << endl;

    return 0;
}

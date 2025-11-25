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

    int n, t;
    cin >> n >> t;
    vector<int> pc(n);
    for (int i = 0; i < n; i++)
    {
        cin >> pc[i];
        pc[i] += t;
        // cout<<pc[i]<<" ";
    }
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if (pc[i] <= 5)
        {
            result++;
        }
    } // cout<<endl<<result<<endl;
    cout << result / 3 << endl;

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fast_io();

    int n, t;
    cin >> n >> t;

    int count = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        x += t;
        if (x <= 5) {
            count++;
        }
    }

    cout << count/3 << endl;

    return 0;
}

*/
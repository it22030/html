#include <iostream>
using namespace std;

int main()
{
    int x, y, n, t;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> n;
        int result = (n - y) / x * x + y;
        cout << result << endl;
    }

    return 0;
}

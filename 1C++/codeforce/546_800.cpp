#include <iostream>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int total = 0;

    for (int i = 1; i <= w; i++)
    {
        total += k * i;
    }
    if (total > n)
    {
        int borrow = total - n;
        cout << borrow << endl;
    }
    else
        cout << "0" << endl;
    return 0;
}

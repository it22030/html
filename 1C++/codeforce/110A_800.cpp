#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int LuckyDigits = 0;
    while (n > 0)
    {
        int LD = n % 10;
        if (LD == 4 || LD == 7)
        {
            LuckyDigits++;
            // cout<<N<<" ";
        }
        n = n / 10;
    }
    if (LuckyDigits == 4 || LuckyDigits == 7)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}

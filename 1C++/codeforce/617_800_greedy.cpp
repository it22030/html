#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    int steps[] = {5, 4, 3, 2, 1};

    for (int i = 0; i < 5; i++)
    {
        count += n / steps[i];
        n = n % steps[i];
    }
    cout << count << endl;
    return 0;
}
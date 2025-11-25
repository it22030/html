#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> s;
    int p1, p2;
    cin >> p1;
    for (int i = 0; i < p1; i++)
    {
        int x;
        cin >> x;
        s.insert(x); // set-এ insert
    }
    cin >> p2;
    for (int i = 0; i < p2; i++)
    {
        int y;
        cin >> y;
        s.insert(y); // set-এ insert
    }
    int result = s.size();
    if (result == n)
    {
        cout << "I become the guy." << endl;
    }
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}

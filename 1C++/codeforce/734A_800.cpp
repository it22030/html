#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int anton = 0, danik = 0;
    for (char ch : str)
    {
        if (ch == 'A')
        {
            anton++;
        }
        else
            danik++;
    } // cout<<anton<<" " ; cout<<danik<<" ";

    if (anton > danik)
    {
        cout << "Anton" << endl;
    }
    else if (danik > anton)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;

    return 0;
}

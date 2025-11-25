#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int lower = 0, upper = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            upper++;

        else
            lower++;
    }
     
    if (lower >= upper)
    {
        for (int i = 0; i < str.size(); i++)
        {
            str[i] = tolower(str[i]);
        }
    }
    else
        for (int i = 0; i < str.size(); i++)
        {
            str[i] = toupper(str[i]);
        }
    cout << str << endl;
    return 0;
}
 
 /*
 
      //
  /*using namespace std;
 
int main()
{
	string s;
	int u=0,l=0;
	cin >> s;	
	for(char c:s)(isupper(c)?u:l)++;
	for(char c:s)cout<<char((u>l)?toupper(c):tolower(c));
}*/



  /*
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;

    int upper = count_if(str.begin(), str.end(), ::isupper);
    int lower = str.size() - upper;

    if(lower >= upper)
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    else
        transform(str.begin(), str.end(), str.begin(), ::toupper);

    cout << str << endl;
    return 0;
}
*/
 
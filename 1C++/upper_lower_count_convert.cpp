#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "Enter a word: ";
   // cin >> s;
   getline(cin,s);
    int upper = 0, lower = 0;
  
    //count upper and lower 
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            upper++;
        }
        else
        //(s[i] >= 'a' && s[i] <= 'z')
        {
            lower++;
        }
    }

    cout << "Uppercase letters: " << upper << endl;
    cout << "Lowercase letters: " << lower << endl;
     
    //convert upper to lower OR lower to upper
    if (lower >= upper)
    {
        for (int i = 0; i < s.size(); i++)
        {

            s[i] = tolower(s[i]);
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = toupper(s[i]);
        }
    }

    cout << s << endl;

    return 0;
}

//59A_800 CDF
/*#include<iostream>
using namespace std;
 
main()
{
	string s;
	int u=0,l=0;
	cin >> s;	
	for(char c:s)(isupper(c)?u++:l++);
	for(char c:s)cout<<char((u>l)?toupper(c):tolower(c));
}*/
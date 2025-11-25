#include<iostream>
#include<bits/stdc++.h>

#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<char> digits;
    vector<char> symbols;

    for (char c : s) {
        if (c >= '0' && c <= '9') {
            digits.push_back(c ); 
        }
        else {
            symbols.push_back(c); 
        }
    }
   sort(digits.begin(),digits.end());
    /*/ Output
    cout << "Digits: ";
    for (char d : digits) cout << d << " ";
    cout << endl;

    cout << "Symbols: ";
    for (char sym : symbols) cout << sym << " ";
    cout << endl; 
    */

    string result;
    for(int i=0;i<digits.size();i++){
        result+=digits[i];
        if(i<symbols.size()){
        result+=symbols[i];
        }
    }

   cout<<result<<endl;

    return 0;
}

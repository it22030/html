/*
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fast_io();
    string str;
    cin>>str;
    int count=0,same=1;
    for(int i=1;i<str.size();i++){
       // if(str[i]!=str[i-1]){ count++; same=1;}
         if(str[i]==str[i-1]){
            same++;
            if(same==5){
                count++; same=0;
            }
        } else {count++;same=1;}
    }

     if (same > 0) count++;
    cout<<count<<endl;

    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;int count=0;
	for(int i=0;i<s.size();i++){
		int same=1;
		while(s[i]==s[i+1]&& same<5){
			same++;i++;
		}
		count++;
	}
	cout<<count<<endl;
}
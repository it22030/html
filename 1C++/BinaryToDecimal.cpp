#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
 int num ,num1,ans=0,power=0;
 cin>>num;
 num1=num;
 while(num>0){
    int lastdigit=num%10;
    ans+=lastdigit*pow(2,power);
    num/=10;
    power++;
 }
cout<<num1<<" convert decimal = " <<ans<<endl;
    return 0;
}

/*
for (int i = binary.length() - 1; i >= 0; i--) {
    if (binary[i] == '1') {
        decimal += pow(2, power); // 2^power যোগ করা হয়
    }
    power++; // পরবর্তী বিটের জন্য power বৃদ্ধি
}
/**/
#include<iostream>
using namespace std;

int main(){

 int num;
 cin>>num;
 if (num<0){
    cout<<"Invalid age"<<endl;
 }
else if (num<12 && num>=0){
    cout<<"Child"<<endl;
 }
 else if(num>=12 && num<18){
    cout <<"Teenager"<<endl;
 }
 else
 cout<<"Adult"<<endl;

    return 0;
}
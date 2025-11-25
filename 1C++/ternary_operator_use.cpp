#include <iostream>
using namespace std;

int main() {
    int num ;
    cin >> num;
    
    if (num % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }

    cout << (num < 0 ? "Invalid age" : 
            (num < 12 ? "Child" : 
            (num < 18 ? "Teenager" : "Adult"))) << endl;

    // Age category স্ট্রিং ভেরিয়েবলে সংরক্ষণ করা
    string age = (num < 0) ? "Invalid" : 
                 (num < 12) ? "Child" : 
                 (num < 18) ? "Teenager" : "Adult";

    cout << "Age category: " << age << endl;
    return 0;
}

/*
#include<iostream>
using namespace std;
int main(){
int a,b,c,d,max;
cin>>a>>b>>c>>d ;

cout<<"Max_number:"<<" ";

max = (a > b) 
? ((a > c) 
    ? (a > d ? a : d) 
    : (c > d ? c : d))
: ((b > c) 
    ? (b > d ? b : d) 
    : (c > d ? c : d));
cout<<max<<endl;

    return 0;
}

//5 num 
#include<iostream>
using namespace std;
int main(){
int a,b,c,d,e,max;
cin>>a>>b>>c>>d>>e ;

cout<<"Max_number:"<<" ";

max = a>b?a>c?a>d?a>e?a:e
:d>e?d:e
:c>d?c>e?c:e:d>e?d:e
        :b>c?b>d?b>e?b:e
:d>e?d:e
:c>d?c>e?c:e:d>e?d:e;


      
cout<<max<<endl;

    return 0;
}

*/

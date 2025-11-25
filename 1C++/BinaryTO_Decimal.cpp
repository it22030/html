#include <iostream>
using namespace std;

int main() {
    
    int num;
    cin>>num;

   int ans=0;
   int power=1;
   while(num>0){
    int lastdigit= num%10;
    cout<<"LD="<<lastdigit <<endl;
    cout<<"LDP=" <<lastdigit*power<<endl;
    ans+=lastdigit*power;
    cout<< "ans1="<<ans <<endl;
    power*=2;  // mul kaj aitai
    cout<<power<<endl;
    num/=10;
   // cout<<ans<<endl;

   }
  cout<<"ans=" << ans<<endl;

    return 0;
}


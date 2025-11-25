#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;      //5%2=1, ans=0+1*1=1, power=10 // 2%2=0, ans=1+0*10=1, power=100 // 1%2=1, ans=1+1*100=101, power=1000    
    int ans=0;                  // n=0, লুপ শেষ , //আউটপুট: 101 (যা ৫-এর বাইনারি রূপ) 
    int power=1;                                
   
   while(n>0){
        int paritydigit = n%2;  
        ans+= paritydigit*power; 
        power*=10; 
        n/=2; 
    }
    
    cout<<ans<<endl;
    return 0;
}


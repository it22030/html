
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push\_back
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

int t; 
cin>>t;
vector<int>arr(t);
for(int i=0;i<t;i++){
   cin>>arr[i];
   if(arr[i]>=1 && arr[i]<=9){
      cout<<"1"<<endl; cout<<arr[i]<<endl;
   }
   else  {
      int count=0;  vector<int>tem;
      int result, a=1;
      while(arr[i]>0){ 
        int LD =arr[i]%10; 
      if(LD!=0) {result=LD*a;
       tem.push_back(result);}
      arr[i]/=10;
      a*=10; 
   } 
   cout<<tem.size()<<endl;
   for(int i=0;i<tem.size();i++){
      cout<<tem[i]<<" ";
   } cout<<endl;

   }
   
}
  return 0;
}

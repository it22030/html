 #include<iostream>
 #include<string>
 using namespace std;

 int main() {
 string str = "Md";
 str.append("Ashikullah");
 cout<<str<<endl;

 string str1="Ashikullah";
 cout<<str+str1<<endl;

 str+=str1;
 cout<<str<<endl;

 string a,b,d; 
 int l,r;
 //string a="ashiku";
 getline(cin,a);
 getline(cin,b);

 //string b="ashik";

 if(a==b){
    cout<<"same"<<endl;

 } 
 else
 cout <<"Different"<<endl;

 if(a.compare(b)==0){
    cout<<"same"<<endl;
 }
 else cout<<"Different"<<endl;

  cout<<a.substr(0,3)<<endl;
  cout<<"Enter subset range l and r:" ;
 cin>>l>>r; 
  d=b.substr(l,r);
  cout<<d<<endl;
 char ch;
 cin>>ch;
  if(a.find(ch)!=string::npos){
    cout<<"Found"<<endl;
  }
  else cout<<"Not Found"<<endl;

cout<<"Find substring of b in a:" ;
  if(a.find(d)!=string::npos){
    cout<<"Found"<<endl;
  }
  else cout<<"Not Found"<<endl;

 return 0;
 }

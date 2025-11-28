// #include <bits/stdc++.h>
// using namespace std;

// #define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// #define ll long long
// #define all(v) (v).begin(), (v).end()
// #define endl '\n'

// int main() {
//     fastio;
    
//     int n,k; string str;
//     cin >> n>>k;
//     cin>>str;
//     //while (t--) {  }
//     if(n==k){
//        for(int i=n-1;i>=0;i--){
//         cout<<"PRINT "<<str[i]<<endl;
//         if(i!=0) cout<<"LEFT"<<endl;
//        }
//     }

//     else if(k==1){
//        for(int i=0;i<n;i++){
//         cout<<"PRINT "<<str[i]<<endl;
//         if(i<n-1) cout<<"RIGHT"<<endl;
//        }
//     }

//      else{
//         int x=n-k; 
//         if(n/2<k){
//         for(int i=0;i<x;i++)cout<<"RIGHT"<<endl;
         
//          for(int i=n-1;i>=0;i--){
//         cout<<"PRINT "<<str[i]<<endl;
//         if(i!=0) cout<<"LEFT"<<endl;
//        }
//         }
//         if(n/2>k || n/2==k){
//         for(int i=1;i<k;i++)cout<<"LEFT"<<endl;

//          for(int i=0;i<n;i++){
//         cout<<"PRINT "<<str[i]<<endl;
//         if(i<n-1) cout<<"RIGHT"<<endl;
//        }
//         }
//     }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define all(v) (v).begin(), (v).end()
#define endl '\n'

void printLeftToRight(const string &str) {
    int n = str.size();
    for (int i = 0; i < n; i++) {
        cout << "PRINT " << str[i] << endl;
        if (i < n - 1) cout << "RIGHT" << endl;
    }
}

void printRightToLeft(const string &str) {
    int n = str.size();
    for (int i = n - 1; i >= 0; i--) {
        cout << "PRINT " << str[i] << endl;
        if (i != 0) cout << "LEFT" << endl;
    }
}

int main() {
    fastio;
    
    int n, k;
    string str;
    cin >> n >> k;
    cin >> str;

    // Case 1: pointer rightmost end
    if (n == k) {
        printRightToLeft(str);
    }

    // Case 2: pointer at position 1
    else if (k == 1) {
        printLeftToRight(str);
    }

    // Case 3: pointer in middle
    else {
       // int x = n - k;

        // If pointer is closer to right
        if (k > n / 2) {
            for (int i = k; i < n; i++) cout << "RIGHT" << endl;
            printRightToLeft(str);
        }
        // If pointer is closer to left
        else {
            for (int i = 1; i < k; i++) cout << "LEFT" << endl;
            printLeftToRight(str);
        }
    }

    return 0;
}

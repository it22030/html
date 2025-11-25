#include<bits/stdc++.h>
using namespace std;


void hanoi(int n, char A, char B, char C){
    if(n == 1){
        cout << n << " th disk moved from " << A << ' ' << C << '\n';
        return;
    }
    hanoi(n-1 , A, C, B);
    cout << n << " th disk moved from " << A << ' ' << C << '\n';
    hanoi(n-1, B, A, C);
}

int main(){
    int n; cin >> n;
    hanoi(n, 'A', 'B', 'C');
}
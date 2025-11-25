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
    int T;
    cin >> T;
    vector<int>balls(T);
   
    for(int i=0;i<T;i++){
        cin>>balls[i];
    }
       
         sort(balls.begin(), balls.end());
             balls.erase(unique(balls.begin(), balls.end()), balls.end()); // akhane index thake 
//set<int> ball(balls.begin(), balls.end()); // but akhane index use kora jabe na 

       for(int i=0;i+2<balls.size();i++){
     
        if((balls[i+2]-balls[i])<=2){
            cout<<"YES"<<endl; return 0;
       } 
    }

     cout<<"NO"<<endl;

    return 0;
}

/*
| Conversion       | Syntax                               | Behavior                                    |
| ---------------- | ------------------------------------ | ------------------------------------------- |
| `vector` → `set` | `set<int> s(v.begin(), v.end());`    | Removes duplicates + sorts                  |
| `set` → `vector` | `vector<int> v(s.begin(), s.end());` | Keeps sorted values (random access enabled) |
*/
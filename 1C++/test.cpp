// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main() {
//    // int arr[] = {4, 1, 2, 1, 3, 1, 3, 3, 3};
//    // int n = sizeof(arr) / sizeof(arr[0]);
//    int n;
//    cin>>n;
//     vector<int>arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     sort(arr.begin(), arr.end());  // Ascending sort

//     int max_count = 1, curr_count = 1;
//     int most_frequent = arr[0];

//     for (int i = 1; i < n; i++) {
//         if (arr[i] == arr[i - 1]) {
//             curr_count++;
//         } else {
//             curr_count = 1;
//         }

//         if (curr_count > max_count) {
//             max_count = curr_count;
//             most_frequent = arr[i];
//         }
//     }

//    // cout << "Most frequent number: " << most_frequent << endl;
//    // cout << "Frequency: " << max_count << " times" << endl;
//      cout << n-max_count<< endl;

//     return 0;
// }



// #include <iostream>
// #include <sstream>
// #include <unordered_map>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//      cin.ignore(); // Newline after test case count

//     while (t--) {
//         string sentence;
//         getline(cin, sentence); // পুরো sentence নিচ্ছি

//         unordered_map<string, int> freq;
//         stringstream ss(sentence);
//         string word;
//         int maxFreq = 0;

//         // Count frequency and find maxFreq
//         while (ss >> word) {
//             freq[word]++;
//             maxFreq = max(maxFreq, freq[word]);
//         }

//         string maxWord;

//         // Find the word that has maxFreq (first match in order)
//         for (auto it : freq) {
//             if (it.second == maxFreq) {
//                 maxWord = it.first;
//                 break;
//             }
//         }

//         cout << "Most frequent word: " << maxWord << endl;
//         cout << "Frequency: " << maxFreq << endl;
//     }

//     return 0;
// }


// #include <iostream>
// #include <sstream>
// #include <unordered_map>
// using namespace std;

// int main() {
//     int n; // কতটি sentence
//     cin >> n;
//     cin.ignore(); // \n বাদ দেয়, কারণ নিচে getline() করবো

//     for (int i = 0; i < n; i++) { 
//         string sentence;
//         getline(cin, sentence); // একটি sentence নিচ্ছি

//         unordered_map<string, int> freq;
//         stringstream ss(sentence);
//         string word;
//         int maxFreq = 0;

//         while (ss >> word) {
//             freq[word]++;
//             maxFreq = max(maxFreq, freq[word]);
//         }

//         string maxWord;
//         for (auto& it : freq) {
//             if (it.second == maxFreq) {
//                 maxWord = it.first;
//                 break;
//             }
//         }

//         cout << "Most frequent word: " << maxWord << endl;
//         cout << "Frequency: " << maxFreq << endl;
//     }

//     return 0;
// }



// #include <iostream>
// #include <unordered_map>
// #include <sstream>
// #include <vector>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;
//    cin.ignore(); // consume newline

//     while (T--) {
//         string line;
//         getline(cin, line);

//         unordered_map<string, int> freq;
//         vector<string> words;

//         stringstream ss(line);
//         string word;
//             int maxFreq = 0;
//         while (ss >> word) {
//             freq[word]++;
//             words.push_back(word);
//             maxFreq=max(freq[word],maxFreq);
//         }

        
//         // for (auto &entry : freq) {
//         //     if (entry.second > maxFreq) {
//         //         maxFreq = entry.second;
//         //     }
//         // }
        

//         // Find first word in original order with max frequency
//         // for (const string &w : words) {
//         //     if (freq[w] == maxFreq) {
//         //         cout << w << " " << maxFreq << endl;
//         //         break;
//         //     }
//         // }
//        string ans;
//         for(auto u:words){
//             if(freq[u]==maxFreq){ ans=u;  break;}
//         }  
//         cout<<ans<<" "<<maxFreq<<endl;
//     }

//     return 0;
// }



// #include <iostream>
// #include <map>
// using namespace std;

// #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// int main() {
//     optimize();
//     int n, m;
//     cin >> n >> m;
    
//     map<string, string> ipName;

//     for (int i = 0; i < n; i++) {
//         string name, ip;
//         cin >> name >> ip;
//         ipName[ip] = name;  /////////
//     }

//     while (m--) {
//         string s1, ip;
//         cin >> s1 >> ip;
        
//         ip.pop_back(); // Remove the trailing ';'
//         cout << s1 << " " << ip << "; #" << ipName[ip] << endl;
//     }

//     return 0;
// }  


#include <iostream>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int tc = 1; tc <= t; tc++) {
        int n, m;
        cin >> n >> m;

        map<pair<int, int>, int> mapp;
       // bool possible = true; 
       int possible=0;

        while (m--) {
            int a, b;
            cin >> a >> b;
            pair<int, int> p = {a, b};
            mapp[p]++;

            if (mapp[p] > 1) {
                possible =2; break;
            }
        }

        if (possible==0)
            cout << "Scenario #" << tc << ": possible" << endl;
        else
            cout << "Scenario #" << tc << ": impossible" << endl;
    }

    return 0;
}


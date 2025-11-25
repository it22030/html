#include <bits/stdc++.h>
using namespace std;

// Lower Bound (insert position)
int findInsertIndex(const vector<int>& a, int target) {
    int l = 0, r = a.size();
    while (l < r) {
        int mid = l + (r - l) / 2;
        if (a[mid] < target)
            l = mid + 1;
        else
            r = mid;
    }
    return l;
}

// Upper Bound
int findUpperBound(const vector<int>& a, int target) {
    int l = 0, r = a.size();
    while (l < r) {
        int mid = l + (r - l) / 2;
        if (a[mid] <= target)
            l = mid + 1;
        else
            r = mid;
    }
    return l;
}

// Normal binary search
int searchIndex(const vector<int>& a, int target) {
    int l = 0, r = a.size() - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] == target) return mid;
        else if (a[mid] < target) l = mid + 1;
        else r = mid - 1;
    }
    return -1; // not found
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int target;
    cin >> target;

    int foundIndex = searchIndex(a, target);
    int lowerIndex = findInsertIndex(a, target);
    int upperIndex = findUpperBound(a, target);

    if (foundIndex != -1) {
        cout << "Found at index: " << foundIndex << '\n';
        cout << "[" << lowerIndex << "," << upperIndex -1<< "]" << endl;
    } else {
        cout << "Not found\n";
        cout << "Insert at lower index = " << lowerIndex << endl;
        cout << "Insert at upper index = " << upperIndex << endl;
        cout << "[-1,-1]" << endl;
    }

    return 0;
}

    //   যদি target array-তে থাকে, lower < upper হবে।

    //   যদি target array-তে না থাকে, কখনও কখনও lower = upper হবে।















    

// #include <bits/stdc++.h>
// using namespace std;

// int findInsertIndex(const vector<int>& a, int target) {
//     int l = 0, r = a.size();   // এখানেই r = n কারণ insert শেষে n-ও হতে পারে

//     while (l < r) {
//         int mid = l + (r - l) / 2;

//         if (a[mid] < target)
//             l = mid + 1;
//         else
//             r = mid;
//     }
//     return l;   // l হলো insert position (lower bound)
// }

// int main() {
//     vector<int> a = {2, 5, 7, 10, 14};
//     int target = 3;

//     int idx = findInsertIndex(a, target);
//      if (idx != -1) cout << "Found at index: " << idx << '\n';
//      else {cout << "Not found\n";
//     cout << "Insert at index = " << idx << endl;}

//     return 0;
// }






// #include <bits/stdc++.h>
// using namespace std;

// // sorted vector 'a' তে target খোঁজা (ইটারেটিভ)
// // ফেরত: index (0-based) যদি পাওয়া যায়, অন্যথায় -1
// int binary_search_iterative(const vector<int>& a, int target) {
//     int l = 0;
//     int r = (int)a.size() - 1;
//     while (l <= r) {
//         int mid = l + (r - l) / 2;    // overflow-এ সাবধানতা
//         if (a[mid] == target) return mid;
//         else if (a[mid] < target) l = mid + 1;
//         else r = mid - 1;
//     }
//     return l; 
// }

// int main() {
//     vector<int> a = {2,5,7,8,11,14,17,20};
//     int t = 3;
//     int idx = binary_search_iterative(a, t);
//     if (idx != -1) cout << "Found at index: " << idx << '\n';
//     else cout << "Not found\n";
//     return 0;
// }


#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();

    // যদি স্ট্রিং খালি হয়
    if (n == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    // ধাপে ধাপে একই রঙের বল গুলোকে segment আকারে রাখব
    vector<pair<char, int>> segments;

    char current_char = s[0]; // প্রথম অক্ষরটা ধরলাম
    int count = 1;            // প্রথম অক্ষরের count = 1

    // segment তৈরি করব: একই রঙের বলের টানা সংখ্যা
    for (int i = 1; i < n; ++i)
    {
        if (s[i] == current_char)
        {
            count++;
        }
        else
        {
            segments.emplace_back(current_char, count);
            current_char = s[i];
            count = 1;
        }
    }
    // শেষ segment টি যোগ করব
    segments.emplace_back(current_char, count);

    int m = segments.size(); // মোট কতটি segment হলো
    int res = 0;             // উত্তর এখানে রাখব

    // আমরা শুধু তখনই চেক করব যদি segment সংখ্যা বিজোড় হয়
    if (m % 2 == 1)
    {
        int middle = m / 2; // মাঝখানের segment-এর index
        bool ok = true;     // শুরুতে ধরে নিচ্ছি সব শর্ত পূরণ হবে

        // বাম-ডান symmetric check করব
        for (int i = 0; i < m; ++i)
        {
            int j = m - 1 - i; // ডান দিকের mirror index

            if (i < j)
            {
                // যদি রঙ না মেলে → eliminate হবে না
                if (segments[i].first != segments[j].first)
                {
                    ok = false;
                    break;
                }
                // যদি দুই দিক মিলিয়ে ৩টির কম হয় → eliminate হবে না
                if (segments[i].second + segments[j].second < 3)
                {
                    ok = false;
                    break;
                }
            }
            else if (i == j)
            {
                // মাঝখানে যদি ২টার কম বল থাকে → বসিয়ে ৩ হবে না
                if (segments[i].second < 2)
                {
                    ok = false;
                    break;
                }
            }
        }

        // যদি সব ঠিক থাকে, তাহলে মাঝখানে একটা বল বসিয়ে total eliminate হবে
        if (ok)
        {
            res = segments[middle].second + 1; // নতুন বলটি মিলিয়ে
        }
    }

    cout << res << endl;
    return 0;
}

/*
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    vector<pair<char, int>> segments;
    char current_char = s[0];
    int count = 1;
    for (int i = 1; i < n; ++i) {
        if (s[i] == current_char) {
            count++;
        } else {
            segments.emplace_back(current_char, count);
            current_char = s[i];
            count = 1;
        }
    }
    segments.emplace_back(current_char, count);

    int m = segments.size();
    int res = 0;

    if (m % 2 == 1) {
        int middle = m / 2;
        bool ok = true;
        for (int i = 0; i < m; ++i) {
            int j = m - 1 - i;
            if (i < j) {
                if (segments[i].first != segments[j].first) {
                    ok = false;
                    break;
                }
                if (segments[i].second + segments[j].second < 3) {
                    ok = false;
                    break;
                }
            } else if (i == j) {
                if (segments[i].second < 2) {
                    ok = false;
                    break;
                }
            }
        }
        if (ok) {
            res = segments[middle].second + 1;
        }
    }

    cout << res << endl;
    return 0;
}*/
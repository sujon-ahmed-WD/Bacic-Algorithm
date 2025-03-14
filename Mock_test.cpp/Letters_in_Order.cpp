#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    set<char> uniq_st(s.begin(), s.end());  // **স্ট্রিং এর সব ইউনিক ক্যারেক্টার সেটে সংরক্ষণ করা**
    
    for(auto c: uniq_st) // **সেটের সব ক্যারেক্টার প্রিন্ট করা**
        cout << c;

    return 0;
}

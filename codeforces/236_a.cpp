#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    map<char, int> count;
    for(int i = 0; i < s.size(); ++i) {
        count[s[i]] += 1;
    }

    if(count.size() % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }

    return 0;
}
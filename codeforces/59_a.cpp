#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    cin >> s;
    vector<int> uppercase;
    vector<int> lowercase;
    for(auto c : s) {
        if(isupper(c)) {
            uppercase.push_back(c);
        } else {
            lowercase.push_back(c);
        }
    }

    if(uppercase.size() > lowercase.size()) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s;
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s;
    }

    return 0;
}
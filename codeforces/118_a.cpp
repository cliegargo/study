#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> n;
    string s, ss;

    cin >> s;

    for(int i = 0; i < s.size(); ++i) {
        if(s[i] != '+') {
            int j = s[i] - '0';
            n.push_back(j);
        }
    }

    sort(n.begin(), n.end());
    
    for(auto k : n) {
        ss += to_string(k) + "+";
    }

    cout << ss.substr(0, ss.size() - 1);
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    getline(cin, s);

    for(int i = 0; i < s.size(); ++i) {
        s[0] = toupper(s[0]);
    }

    cout << s;

    return 0;
}
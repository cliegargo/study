#include <bits/stdc++.h>
using namespace std;

static string accum(const string &s) {
    string mumbled;

    for (int i = 0; i < s.length(); ++i) {
        mumbled += "-";
        mumbled += string(1, toupper(s[i]));
        mumbled += string(i ,tolower(s[i]));
    }
    return mumbled.substr(1);
}

int main() {
    string s;

    cin >> s;
    cout << accum(s) << endl;

    return 0;

}
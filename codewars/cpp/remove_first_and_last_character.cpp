#include <bits/stdc++.h>
using namespace std;

string sliceString(string str) {
    return str.substr(1, str.size()-2);
}

int main() {
    string str;

    cin >> str;
    cout << sliceString(str) << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;


int flipIntBool(int baseIntBoolean) {
    if (baseIntBoolean == true) {
        return false;
    } else {
        return true;
    }
}

int main() {
    int baseIntBoolean;

    cin >> baseIntBoolean;
    cout << flipIntBool(baseIntBoolean) << endl;

    return 0;
}
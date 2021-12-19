// Red or Not

#include <iostream>
using namespace std;

int main() {
    int a, n = 3200;
    string s;

    cin >> a >> s;

    if (a > n) {
        cout << s << endl;
    }

    if (n > a) {
        cout << "red" << endl;
    }

    return 0;
}

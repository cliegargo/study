#include <bits/stdc++.h>
using namespace std;

bool lessThan100(int a, int b) {
    if((a + b) < 100) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int a, b;

    cin >> a >> b;
    cout << lessThan100(a, b) << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool isEven(int n) {
    return ((n % 2 == 0) ? true : false);
}

int main() {
    int n;

    cin >> n;
    cout << isEven(n) << endl;

    return 0;
}
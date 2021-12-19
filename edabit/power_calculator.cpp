#include <bits/stdc++.h>
using namespace std;

int circuitPower(int voltage, int current) {
    return (voltage * current);
}

int main() {
    int voltage, current;

    cin >> voltage >> current;
    cout << circuitPower(voltage, current) << endl;

    return 0;
}
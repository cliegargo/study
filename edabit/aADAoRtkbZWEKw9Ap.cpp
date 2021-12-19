#include <bits/stdc++.h>
using namespace std;

int animals(int chickens, int cows, int pigs) {
    chickens *= 2;
    cows *= 4;
    pigs *= 4;
    return (chickens + cows + pigs);
}

int main() {
    int chickens, cows, pigs;

    cin >> chickens >> cows >> pigs;
    cout << animals(chickens, cows, pigs) << endl;

    return 0;
}
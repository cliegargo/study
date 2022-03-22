// https://www.codewars.com/kata/55cbc3586671f6aa070000fb/train/cpp


#include <iostream>
using namespace std;

bool checkForFactor(int base, int factor) {
    return true ? (base % factor == 0) : false;
}

int main() {
    int base, factor;

    cin >> base >> factor;
    cout << checkForFactor(base, factor) << endl;

    return 0;
}
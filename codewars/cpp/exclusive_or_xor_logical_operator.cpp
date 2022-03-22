// https://www.codewars.com/kata/56fa3c5ce4d45d2a52001b3c/train/cpp


#include <iostream>

bool xorf(bool a, bool b) {
    return (a != b) ? true : false;
}

int main() {
    bool a, b;

    std::cin >> a >> b;
    std::cout << xorf(a, b) << "\n";

    return 0;
}
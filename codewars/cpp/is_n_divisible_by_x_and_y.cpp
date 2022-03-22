// https://www.codewars.com/kata/5545f109004975ea66000086/train/cpp


#include <iostream>

bool isDivisible(int n, int x, int y) {
    return (n % x == 0 && n % y == 0) ? true : false;
}

int main() {
    int n, x, y;

    std::cin >> n >> x >> y;
    std::cout << isDivisible(n, x, y) << "\n";

    return 0;
}
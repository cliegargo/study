// https://www.codewars.com/kata/523b66342d0c301ae400003b/train/cpp


#include <iostream>

int multiply(int x, int y) {
    return x * y;
}

int main() {
    int x, y;

    std::cin >> x >> y;
    std::cout << multiply(x, y) << std::endl;

    return 0;
}
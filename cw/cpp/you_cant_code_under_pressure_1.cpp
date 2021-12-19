// https://www.codewars.com/kata/53ee5429ba190077850011d4/train/cpp


#include <iostream>

int32_t double_integer(int32_t n) {
    return n * 2;
}

int main() {
    int32_t n;

    std::cin >> n;
    std::cout << double_integer(n) << std::endl;

    return 0;
}
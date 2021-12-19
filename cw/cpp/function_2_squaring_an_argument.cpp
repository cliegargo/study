// https://www.codewars.com/kata/523b623152af8a30c6000027/train/cpp


#include <iostream>

int square(int n) {
    return n * n;
}

int main() {
    int n;

    std::cin >> n;
    std::cout << square(n) << std::endl;

    return 0;
}
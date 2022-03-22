// https://www.codewars.com/kata/583710ccaa6717322c000105/train/cpp


#include <iostream>

int simpleMultiplication(int a) {
    if(a % 2 == 0) {
        return a * 8;
    } else {
        return a * 9;
    }
}

int main() {
    int a;

    std::cin >> a;
    std::cout << simpleMultiplication(a) << std::endl;

    return 0;
}
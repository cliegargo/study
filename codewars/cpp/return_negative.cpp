// https://www.codewars.com/kata/55685cd7ad70877c23000102/train/cpp

#include <iostream>

int makeNegative(int num) {
    return (num > 0) ? ~(num - 1) : num;
}

int main() {
    int num;

    std::cin >> num;
    std::cout << makeNegative(num) << std::endl;

    return 0;
}
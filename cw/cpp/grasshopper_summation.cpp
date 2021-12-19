// https://www.codewars.com/kata/55d24f55d7dd296eb9000030/train/cpp


#include <iostream>

int summation(int num) {
    int sum = 0;

    for(int i = 0; i <= num; ++i) {
        sum += i;
    }

    return sum;
}

int main() {
    int num;

    std::cin >> num;
    std::cout << summation(num) << std::endl;

    return 0;
}
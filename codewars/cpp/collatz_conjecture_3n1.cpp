// https://www.codewars.com/kata/577a6e90d48e51c55e000217/train/cpp


#include <iostream>

unsigned int hotpo(unsigned int n) {
    unsigned int sum = 0;

    while(n != 1) {
        n = (n % 2 == 0) ? n = n / 2 : n = 3 * n + 1;
        sum += 1;
    }

    return sum;
}

int main() {
    unsigned int n;
    std::cin >> n;
    std::cout << hotpo(n) << std::endl;

    return 0;
}
// https://www.codewars.com/kata/555a67db74814aa4ee0001b5/train/cpp


#include <iostream>
#include <cmath>

bool is_even(double n) {
    return (std::fmod(n, 2) == 0) ? true : false;
}

int main() {
    double n;

    std::cin >> n;
    std::cout << is_even(n) << std::endl;

    return 0;
}
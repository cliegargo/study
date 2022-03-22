// https://www.codewars.com/kata/582cb0224e56e068d800003c/train/cpp

#include <iostream>

int litres(double time) {
    return time * 0.5;
}

int main() {
    double time;

    std::cin >> time;
    std::cout << litres(time) << std::endl;

    return 0;
}
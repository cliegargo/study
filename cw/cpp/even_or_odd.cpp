// https://www.codewars.com/kata/53da3dbb4a5168369a0000fe/train/cpp


#include <iostream>

std::string even_or_odd(int number) {
    return (number % 2 == 0) ? "Even" : "Odd";
}

int main() {
    int number;

    std::cin >> number;
    std::cout << even_or_odd(number) << "\n";

    return 0;
}
// https://www.codewars.com/kata/5265326f5fda8eb1160004c8/train/cpp


#include <iostream>

std::string number_to_string(int num) {
    return std::to_string(num);
}

int main() {
    int num;

    std::cin >> num;
    std::cout << number_to_string(num) << std::endl;

    return 0;
}
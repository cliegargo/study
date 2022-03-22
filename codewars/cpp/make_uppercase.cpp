// https://www.codewars.com/kata/57a0556c7cb1f31ab3000ad7/train/cpp


#include <iostream>
#include <algorithm>

std::string makeUpperCase(const std::string& input_str) {
    std::string up = input_str;
    std::transform(up.begin(), up.end(), up.begin(), ::toupper);
    return up;
}

int main() {
    std::string input_str;

    std::cin >> input_str;
    std::cout << makeUpperCase(input_str) << '\n';

    return 0;
}
// https://www.codewars.com/kata/57eae20f5500ad98e50002c5/train/cpp


#include <iostream>
#include <regex>

std::string no_space(std::string x) {
    return std::regex_replace(x, std::regex("[\\s]"), "");
}

int main() {
    std::string x;

    getline(std::cin, x);
    std::cout << no_space(x) << "\n";

    return 0;
}
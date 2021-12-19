// https://www.codewars.com/kata/57a0885cbb9944e24c00008e/train/cpp


#include <iostream>
#include <regex>

std::string removeExclamationMarks(std::string str) {
    std::regex mark("[!]");
    return std::regex_replace(str, mark, "");
}

int main() {
    std::string str;

    std::cin >> str;
    std::cout << removeExclamationMarks(str) << std::endl;

    return 0;
}
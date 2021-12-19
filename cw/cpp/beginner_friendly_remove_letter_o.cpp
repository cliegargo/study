// https://www.codewars.com/kata/58d3dd53b0fe8c9ac10000b3/train/cpp


#include <iostream>
#include <regex>

std::string removeO(const std::string& str) {
    return std::regex_replace(str, std::regex("[oO]"), "");
}

int main() {
    std::string str;

    getline(std::cin, str);
    std::cout <<removeO(str) << std::endl;

    return 0;
}
// https://www.codewars.com/kata/52fba66badcd10859f00097e/train/cpp


#include <iostream>
#include <regex>

std::string disemvowel(const std::string& str) {
    std::regex vowels("[aeiouAEIOU]+");

    return std::regex_replace(str, vowels, "");
}

int main() {
    std::string str;

    getline(std::cin, str);
    std::cout << disemvowel(str) << std::endl;

    return 0;
}
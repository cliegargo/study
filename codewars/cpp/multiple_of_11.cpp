// https://www.codewars.com/kata/581f12491bbdd0ca45000070


#include <iostream>
#include <sstream>
bool eleven(const std::string input) {
    long long int number;
    std::stringstream(input) >> number;

    return (number % 11 == 0) ? true : false;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << eleven(input) << "\n";
    return 0;
}
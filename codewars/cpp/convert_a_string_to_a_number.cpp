// https://www.codewars.com/kata/544675c6f971f7399a000e79/train/cpp


#include <iostream>
#include <sstream>

int string_to_number(const std::string& s) {
    int n = 0;
    std::stringstream(s) >> n;

    return n;
}

int main() {
    std::string s;
    
    std::cin >> s;
    std::cout << string_to_number(s) << std::endl;

    return 0;
}
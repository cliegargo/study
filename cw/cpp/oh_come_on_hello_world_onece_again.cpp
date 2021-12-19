// https://www.codewars.com/kata/594a7ea087a7c6cbe60000d6/train/cpp
// https://en.cppreference.com/w/cpp/string/byte


#include <iostream>

std::string f() {
    return "\x48\x65\x6C\x6C\x6F\x2C\x20\x77\x6F\x72\x6C\x64\x21";
}

int main() {
    std::cout << f() << std::endl;

    return 0;
}
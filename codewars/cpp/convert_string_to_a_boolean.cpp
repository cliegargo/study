// https://www.codewars.com/kata/551b4501ac0447318f0009cd/train/cpp


#include <iostream>

std::string boolean_to_string(bool b) {
    return (b == 1) ? "true" : "false";
}

int main() {
    bool b;

    std::cin >> b;
    std::cout << boolean_to_string(b) << "\n";

    return 0;
}
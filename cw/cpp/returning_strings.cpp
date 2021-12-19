// https://www.codewars.com/kata/55a70521798b14d4750000a4/train/cpp


#include <iostream>

std::string greet(const std::string& n) {
    return "Hello, " + n + " how are you doing today?";
}

int main() {
    std::string n;

    std::cin >> n;
    std::cout << greet(n) << std::endl;

    return 0;
}
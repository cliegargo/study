// https://www.codewars.com/kata/5966e33c4e686b508700002d/train/cpp


#include <iostream>
#include <sstream>

std::string sum_str(const std::string& a, const std::string& b) {
    int x = 0, y = 0;
    std::istringstream(a) >> x;
    std::istringstream(b) >> y;

    return std::to_string(x + y);
}

int main() {
    std::string a, b;

    std::cin >> a >> b;
    std::cout << sum_str(a, b) << std::endl;

    return 0;
}
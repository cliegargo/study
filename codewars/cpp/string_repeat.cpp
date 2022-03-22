// https://www.codewars.com/kata/57a0e5c372292dd76d000d7e/train/cpp


#include <iostream>

std::string repeat_str(size_t repeat, const std::string& str) {
    std::string repeated;

    for(int i = 0; i < repeat; ++i) {
        repeated += str;
    }

    return repeated;
}

int main() {
    size_t repeat;
    std::cin >> repeat;

    std::string str;
    std::cin >> str;

    std::cout << repeat_str(repeat, str) << "\n";

    return 0;
}
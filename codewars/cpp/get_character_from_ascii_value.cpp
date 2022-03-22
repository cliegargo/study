// https://www.codewars.com/kata/55ad04714f0b468e8200001c/train/cpp


#include <iostream>

char get_char(int i) {
    return char(i);
}

int main() {
    int i;

    std::cin >> i;
    std::cout << get_char(i) << "\n";

    return 0;
}
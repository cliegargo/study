// https://www.codewars.com/kata/5ab6538b379d20ad880000ab/train/cpp


#include <iostream>

int area_or_perimeter(int l, int w) {
    return (l == w) ? (l * w) : ((2 * l) + (2* w));
}

int main() {
    int l, w;

    std::cin >> l >> w;
    std::cout << area_or_perimeter(l, w) << "\n";

    return 0;
}
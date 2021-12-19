// https://www.codewars.com/kata/5951d30ce99cf2467e000013/solutions/cpp


#include <iostream>

bool PythagoreanTriple(const int a, const int b, const int c) {
    if((a * a) + (b * b) == (c * c)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int a, b, c;

    std::cin >> a >> b >> c;
    std::cout << PythagoreanTriple(a, b, c) << std::endl;

    return 0;
}
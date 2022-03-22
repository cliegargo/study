// https://www.codewars.com/kata/56dec885c54a926dcd001095/train/cpp


#include <iostream>

int opposite(int number) {
    return ~number - (-1);
}

int main() {
    int number;

    std::cin >> number;
    std::cout << opposite(number) << "\n";

    return 0;
}
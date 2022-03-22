// https://www.codewars.com/kata/5ce9c1000bab0b001134f5af/train/cpp


#include <iostream>

int quarter_of(int month) {
    switch(month) {
        case 1 ... 3: return 1; break;
        case 4 ... 6: return 2; break;
        case 7 ... 9: return 3; break;
        case 10 ... 12: return 4; break;
    }

    return 0;
}

int main() {
    int month;

    std::cin >> month;
    std::cout << quarter_of(month) << std::endl;

    return 0;
}
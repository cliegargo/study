// https://www.codewars.com/kata/555086d53eac039a2a000083/train/cpp


#include <iostream>

bool lovefunc(int f1, int f2) {
    if(f1 % 2 == 0 && f2 % 2 != 0) {
        return true;
    } else if(f1 % 2 != 0 && f2 % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int f1, f2;

    std::cin >> f1 >> f2;
    std::cout << lovefunc(f1, f2) << "\n";

    return 0;
}
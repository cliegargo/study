// https://www.codewars.com/kata/59ca8246d751df55cc00014c/train/cpp


#include <iostream>

bool hero(int bullets, int dragons) {
    while(dragons != 0) {
        bullets -= 2;
        dragons -= 1;
    }

    if(bullets >= dragons) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int bullets, dragons;

    std::cin >> bullets >> dragons;
    std::cout << hero(bullets, dragons) << "\n";

    return 0;
}
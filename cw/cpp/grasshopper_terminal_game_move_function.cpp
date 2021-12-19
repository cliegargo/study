// https://www.codewars.com/kata/563a631f7cbbc236cf0000c2/train/cpp


#include <iostream>

int move(int position, int roll) {
    return position + (roll * 2);
}

int main() {
    int position, roll;

    std::cin >> position >> roll;
    std::cout << move(position, roll) << std::endl;

    return 0;
}
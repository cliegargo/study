// https://www.codewars.com/kata/568dcc3c7f12767a62000038/train/cpp


#include <iostream>

bool set_alarm(const bool& employed, const bool& vacation) {
    return (employed == true && vacation == false) ? true : false;
}

int main() {
    bool employed, vacation;

    std::cin >> employed >> vacation;
    std::cout << set_alarm(employed, vacation) << "\n";

    return 0;
}
// https://www.codewars.com/kata/526c7363236867513f0005ca/train/cpp


#include <iostream>

bool IsLeapYear(int year) {
    if(year % 4 == 0) {
        if(year % 100 == 0) {
            if(year % 400 == 0) {
                return true;
            } else {
                return false;
            }
        } else {
            return true;
        }
    } else {
        return false;
    }
}

int main() {
    int year;

    std::cin >> year;
    std::cout << IsLeapYear(year) << std::endl;

    return 0;
}
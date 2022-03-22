// https://www.codewars.com/kata/55cbd4ba903825f7970000f5/train/cpp


#include <iostream>

char getGrade(int a, int b, int c) {
    int sum = a + b +c;
    int average = sum / 3;

    if(average >= 90) {
        return 'A';
    } else if(average >= 80 && average < 90) {
        return 'B';
    } else if(average >= 70 && average < 80) {
        return 'C';
    } else if(average >= 60 && average < 70) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int a, b, c;

    std::cin >> a >> b >> c;
    std::cout << getGrade(a, b, c) << std::endl;

    return 0;
}
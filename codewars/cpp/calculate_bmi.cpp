// https://www.codewars.com/kata/57a429e253ba3381850000fb/train/cpp


#include <iostream>
#include <cmath>

std::string bmi(double w, double h) {
    float bmi = w / pow(h, 2);

    if(bmi <= 18.5) {
        return "Underweight";
    } else if(bmi > 18.5 && bmi <= 25.0) {
        return "Normal";
    } else if(bmi > 25.0 && bmi <= 30.0) {
        return "Overweight";
    } else {
        return "Obese";
    }

    return 0;
}


int main() {
    double w, h;

    std::cin >> w >> h;
    std::cout << bmi(w, h) << "\n";

    return 0;
}
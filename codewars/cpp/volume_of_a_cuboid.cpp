// https://www.codewars.com/kata/58261acb22be6e2ed800003a/train/cpp


#include <iostream>

double getVolumeOfCubiod(double length, double width, double height) {
    return length * width * height;
}

int main() {
    double length, width, height;

    std::cin >> length >> width >> height;
    std::cout << getVolumeOfCubiod(length, width, height) << "\n";

    return 0;
}
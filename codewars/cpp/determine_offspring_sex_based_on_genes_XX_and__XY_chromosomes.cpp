// https://www.codewars.com/kata/56530b444e831334c0000020/train/cpp


#include <iostream>

std::string chromosomeCheck(std::string sperm) {
    if(sperm == "XY") {
        return "Congratulations! You're going to have a son.";
    } else {
        return "Congratulations! You're going to have a daughter.";
    }
}

int main() {
    std::string sperm;

    std::cin >> sperm;
    std::cout << chromosomeCheck(sperm) << std::endl;

    return 0;
}
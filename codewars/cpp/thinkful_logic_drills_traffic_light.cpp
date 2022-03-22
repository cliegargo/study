// https://www.codewars.com/kata/58649884a1659ed6cb000072/train/cpp


#include <iostream>

std::string update_light(std::string current) {
    if(current == "green") {
        return "yellow";
    } else if(current == "yellow") {
        return "red";
    } else if(current == "red") {
        return "green";
    }

    return 0;
}

int main() {
    std::string current;

    std::cin >> current;
    std::cout << update_light(current) << "\n";

    return 0;
}
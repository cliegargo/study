// https://www.codewars.com/kata/5772da22b89313a4d50012f7/train/cpp


#include <iostream>

std::string greet(const std::string& name, const std::string& owner) {
    if(name == owner) {
        return "Hello boss";
    } else {
        return "Hello guest";
    }
}

int main() {
    std::string name, owner;

    std::cin >> name >> owner;
    std::cout << greet(name, owner) << std::endl;

    return 0;
}
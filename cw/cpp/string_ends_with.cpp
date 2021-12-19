// https://www.codewars.com/kata/51f2d1cafc9c0f745c00037d/train/cpp


#include <iostream>

bool solution(std::string const &str, std::string const &ending) {
    std::string starting = str.substr(0, str.size() - ending.size());
    
    if((starting + ending) == str) {
        return true;
    } else {
        return false;
    }

    return 0;
}

int main() {
    std::string str, ending;

    std::cin >> str >> ending;
    std::cout << solution(str, ending) << std::endl;

    return 0;
}
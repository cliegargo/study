// https://www.codewars.com/kata/577bd026df78c19bca0002c0/train/cpp


#include <iostream>

std::string correct(std::string str) {
    std::string correct = "";

    for(int i = 0; i < str.size(); ++i) {
        if(str[i] == '5') {
            correct += 'S';
        } else if(str[i] == '0') {
            correct += 'O';
        } else if(str[i] == '1') {
            correct += 'I';
        } else {
            correct += str[i];
        }
    }

    return correct;
}

int main() {
    std::string str;

    getline(std::cin, str);
    std::cout << correct(str) << "\n";

    return 0;
}
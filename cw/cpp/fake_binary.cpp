// https://www.codewars.com/kata/57eae65a4321032ce000002d/train/cpp


#include <iostream>

std::string fakeBin(std::string str) {
    for(int i = 0; i < str.size(); ++i) {
        int n = str[i] - '0';
        if(n < 5) {
            str.replace(i, 1, "0");
        } else {
            str.replace(i, 1, "1");
        }
    }

    return str;
}

int main() {
    std::string str;

    std::cin >> str;
    std::cout << fakeBin(str) << "\n";

    return 0;
}
// https://www.codewars.com/kata/592c1dfb912f22055b000099/train/cpp


#include <iostream>
#include <algorithm>
#include <map>

std::string unlock(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(), ::toupper);

    std::map<char, char> keypad {
        {'A', '2'}, {'B', '2'}, {'C', '2'},
        {'D', '3'}, {'E', '3'}, {'F', '3'},
        {'G', '4'}, {'H', '4'}, {'I', '4'},
        {'J', '5'}, {'K', '5'}, {'L', '5'},
        {'M', '6'}, {'N', '6'}, {'O', '6'},
        {'P', '7'}, {'Q', '7'}, {'R', '7'}, {'S', '7'},
        {'T', '8'}, {'U', '8'}, {'V', '8'},
        {'W', '9'}, {'X', '9'}, {'Y', '9'}, {'Z', '9'},
    };

    std::string passcode;

    for(int i = 0; i < str.size(); i++) {
        auto it = keypad.find(str[i]);
        if (it != keypad.end()) {
            passcode += it->second;
        }
    }

    return passcode;
}

int main() {
    std::string str;
    std::cin >> str;
    std::cout << unlock(str) << "\n";
    return 0;
}
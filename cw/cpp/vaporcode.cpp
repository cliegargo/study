// https://www.codewars.com/kata/5966eeb31b229e44eb00007a/train/cpp


#include <iostream>
#include <algorithm>

std::string vaporcode(const std::string& str) {
    std::string s = str;
    std::transform(s.begin(), s.end(), s.begin(), ::toupper);

    std::string vap;
    for(auto i : s) {
        if(i != ' ') {
            vap += i;
            vap += "  ";
        }
    }

    return vap.substr(0, vap.size() - 2);
}

int main() {
    std::string str;

    getline(std::cin, str);
    std::cout << vaporcode(str) << "\n";

    return 0;
}
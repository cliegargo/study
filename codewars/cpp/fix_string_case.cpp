// https://www.codewars.com/kata/5b180e9fedaa564a7000009a/train/cpp


#include <iostream>
#include <vector>
#include <algorithm>

std::string solve(const std::string& str) {
    std::vector<char> lower;
    std::vector<char> upper;

    std::string s = str;

    for(auto c : s) {
        if(islower(c)) {
            lower.push_back(c);
        } else {
            upper.push_back(c);
        }
    }

    if(lower.size() > upper.size() || lower.size() == upper.size()) {
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);
        return s;
    } else {
        std::transform(s.begin(), s.end(), s.begin(), ::toupper);
        return s;
    }
}

int main() {
    std::string str;

    std::cin >> str;
    std::cout << solve(str) << "\n";

    return 0;
}
// https://www.codewars.com/kata/57f759bb664021a30300007d/train/cpp


#include <iostream>

std::string switcheroo(const std::string& s) {
    std::string switched = "";

    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == 'a') {
            switched += 'b';
        } else if(s[i] == 'b') {
            switched += 'a';
        } else {
            switched += s[i];
        }
    }

    return switched;
}

int main() {
    std::string s;

    std::cin >> s;
    std::cout << switcheroo(s) << "\n";

    return 0;
}
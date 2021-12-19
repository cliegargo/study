// https://www.codewars.com/kata/517abf86da9663f1d2000003/train/cpp


#include <iostream>
#include <regex>

std::string to_camel_case(std::string text) {
    std::string txt = std::regex_replace(text, std::regex("[-]|[_]"), " ");

    for(int i = 0; i < txt.size(); ++i) {
        if(txt[i] == ' ') {
            txt[i + 1] = toupper(txt[i + 1]);
        }
    }

    return std::regex_replace(txt, std::regex("[\\s]"), "");
}

int main() {
    std::string text;

    std::cin >> text;
    std::cout << to_camel_case(text) << "\n";

    return 0;
}
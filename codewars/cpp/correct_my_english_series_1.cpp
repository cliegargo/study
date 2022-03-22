#include <iostream>
#include <regex>
#include <vector>

std::vector<std::string> split(std::string str) {
    std::vector<std::string> words;
    std::string tmp;

    for(auto i : str) {
        if(i != ' ') {
            tmp += i;
        } else {
            words.push_back(tmp);
            tmp = "";
        }
    }
    words.push_back(tmp);

    return words;
}

std::string correct_it(std::string str) {
    str = std::regex_replace(str, std::regex("[\\s]+"), " ");
    std::vector<std::string> words = split(str);

    std::string fixed;

    for(auto i : words) {
        for(unsigned long j = 0; j < i.size(); ++j) {
            if(i[j] == '.') {
                fixed += i[j];
                fixed += ' ';
                i[j + 1] = toupper(i[j + 1]);
            } else if(i[j] == ' ' && isupper(i[j + 1])) {
                std::cout << "else if: ";
                std::cout << i[j] << '|' << i[j + 1] << '\n';
            } else {
                fixed += i[j];
            }
        }
    }

    fixed += '.';
    if(isspace(fixed[0])) {
        fixed = fixed.substr(1, fixed.size());
    }
    if(iswlower(fixed[0])) {
        fixed[0] = toupper(fixed[0]);
    }
    return fixed;
}

int main() {
    std::string str;

    getline(std::cin, str);
    std::cout << correct_it(str) << '\n';

    return 0;
}
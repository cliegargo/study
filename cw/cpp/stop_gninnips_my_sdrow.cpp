// https://www.codewars.com/kata/5264d2b162488dc400000001/train/cpp


#include <iostream>
#include <vector>
#include <algorithm>

std::string spinWords(const std::string& str) {
    std::vector<std::string> words;
    std::string tmp = "";

    for(auto i : str) {
        if(i != ' ') {
            tmp += i;
        } else {
            words.push_back(tmp);
            tmp = "";
        }
    }
    words.push_back(tmp);

    std::string gninnips;
    for(auto i : words) {
        if(i.size() >= 5) {
            std::reverse(i.begin(), i.end());
            gninnips += i + " ";
        } else {
            gninnips += i + " ";
        }
    }

    return gninnips.substr(0, gninnips.size() - 1);
}

int main() {
    std::string str;
    getline(std::cin, str);
    std::cout << spinWords(str) << "\n";
    std::cout << typeid(spinWords(str)).name() << "\n";
    return 0;
}
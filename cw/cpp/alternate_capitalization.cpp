// https://www.codewars.com/kata/59cfc000aeb2844d16000075/train/cpp


#include <iostream>
#include <utility>

std::pair<std::string, std::string> capitalize(const std::string& s) {
    std::string alt1 = s;
    for(int i = 0; i < alt1.size(); ++i) {
        if(i % 2 == 0) {
            alt1[i] = toupper(alt1[i]);
        }
    }

    std::string alt2 = s;
    for(int j = 0; j < alt2.size(); ++j) {
        if(j % 2 != 0) {
            alt2[j] = toupper(alt2[j]);
        }
    }

    return {alt1, alt2};
}

int main() {
    std::string s;

    std::cin >> s;
    std::pair<std::string, std::string> alt = capitalize(s);
    std::cout << alt.first << ", " << alt.second << "\n";

    return 0;
}
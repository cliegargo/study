// https://www.codewars.com/kata/51c8991dee245d7ddf00000e/train/cpp


#include <iostream>
#include <vector>
#include <algorithm>

std::string reverse_words(const std::string& str) {
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

    std::reverse(words.begin(), words.end());
    std::string reversed = "";
    
    for(auto j : words) {
        reversed += j + " ";
    }

    return reversed.substr(0, reversed.size() - 1);

}

int main() {
    std::string str;

    getline(std::cin, str);
    std::cout << reverse_words(str) << "\n";

    return 0;
}
// https://www.codewars.com/kata/583203e6eb35d7980400002a/train/cpp


#include <iostream>
#include <vector>
#include <map>

int countSmileys(std::vector<std::string> arr) {
    std::map<std::string, int> smileys = {
        {":)", 1}, {";)", 1}, {":-)", 1}, {";-)", 1}, {":~)", 1}, {";~)", 1},
        {":D", 1}, {";D", 1}, {":-D", 1}, {";-D", 1}, {":~D", 1}, {";~D", 1},
    };

    int counter = 0;
    for(auto i : arr) {
        auto it = smileys.find(i);
        if(it != smileys.end()) {
            counter += it->second;
        }
    }

    return counter;
}

int main() {
    int lim;
    std::cin >> lim;

    std::vector<std::string> arr;
    std::string s;

    for(int i = 0; i < lim; ++i) {
        std::cin >> s;
        arr.push_back(s);
    }

    std::cout << countSmileys(arr) << "\n";

    return 0;
}
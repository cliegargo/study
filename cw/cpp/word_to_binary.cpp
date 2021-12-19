// https://www.codewars.com/kata/59859f435f5d18ede7000050/train/cpp


#include <iostream>
#include <vector>
#include <bitset>
#include <iterator>

std::vector<std::string> word_to_bin(std::string word) {
    std::vector<std::string> bin;

    for(int i = 0; i < word.size(); ++i) {
        bin.push_back(std::bitset<8>(word[i]).to_string());
    }

    return bin;
}

int main() {
    std::string word;

    std::cin >> word;
    std::vector<std::string> bin = word_to_bin(word);
    copy(bin.begin(), bin.end(), std::ostream_iterator<std::string>(std::cout, ""));
    std::cout << "\n";
    return 0;
}
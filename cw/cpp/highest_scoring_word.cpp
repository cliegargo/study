// https://www.codewars.com/kata/57eb8fcdf670e99d9b000272/train/cpp


#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

std::string highestScoringWord(const std::string& str) {
    std::map<char, int> alpha_score = {
        {'a', 1}, {'b', 2}, {'c', 3}, {'d', 4}, {'e', 5}, {'f', 6}, {'g', 7},
        {'h', 8}, {'i', 9}, {'j', 10}, {'k', 11}, {'l', 12}, {'m', 13},
        {'n', 14}, {'o', 15}, {'p', 16}, {'q', 17}, {'r', 18}, {'s', 19},
        {'t', 20}, {'u', 21}, {'v', 22}, {'w', 24}, {'x', 24}, {'y', 25},
        {'z', 26},
    };

    std::vector<std::string> words;
    std::string chr;
    std::vector<unsigned int> scores;
    unsigned int sum = 0;

    for(auto c : str) {
        auto it = alpha_score.find(c);
        if( c != ' ') {
            chr += c;
            sum += it->second;
        } else {
            words.push_back(chr);
            scores.push_back(sum);
            chr = "";
            sum = 0;
        }
    }
    scores.push_back(sum);
    words.push_back(chr);

    unsigned int max = std::distance(scores.begin(), std::max_element(scores.begin(), scores.end()));

    return words[max];
}

int main() {
    std::string str;

    getline(std::cin, str);
    std::cout << highestScoringWord(str) << "\n";

    return 0;
}
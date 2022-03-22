// https://www.codewars.com/kata/5680781b6b7c2be860000036/train/cpp


#include <iostream>
#include <iterator>
#include <vector>

std::vector<int> vowelIndices(const std::string& word) {
    std::vector<int> res;

    for(int i = 0; i <= word.size(); ++i) {
        if(word[i] == 'a' || word[i] == 'A') {
            res.push_back(i+1);
        } else if(word[i] == 'e' || word[i] == 'E') {
            res.push_back(i+1);
        } else if(word[i] == 'i' || word[i] == 'I') {
            res.push_back(i+1);
        } else if(word[i] == 'o' || word[i] == 'O') {
            res.push_back(i+1);
        } else if(word[i] == 'u' || word[i] == 'U') {
            res.push_back(i+1);
        } else if(word[i] == 'y' || word[i] == 'Y') {
            res.push_back(i+1);
        }
    }

    return res;
}

int main() {
    std::string word;

    std::cin >> word;
    std::vector<int> index = vowelIndices(word);
    copy(index.begin(), index.end(), std::ostream_iterator<int>(std::cout, " "));

    return 0;
}
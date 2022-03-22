// https://www.codewars.com/kata/5697fb83f41965761f000052/train/cpp


#include <iostream>
#include <vector>
#include <iterator>

std::vector<std::string> filter_long_words(const std::string& sentence, int n) {
    std::vector<std::string> words;
    std::string tmp;

    for(auto i : sentence) {
        if(i != ' ') {
            tmp += i;
        } else {
            words.push_back(tmp);
            tmp = "";
        }
    }
    words.push_back(tmp);

    std::vector<std::string> long_words;

    for(auto j : words) {
        if(j.size() > n) {
            long_words.push_back(j);
        }
    }

    return long_words;
}


int main() {
    std::string sentence;
    getline(std::cin, sentence);

    int n;
    std::cin >> n;

    std::vector<std::string> filter = filter_long_words(sentence, n);
    copy(filter.begin(), filter.end(), std::ostream_iterator<std::string>(
        std::cout, " "));

    return 0;
}
// https://www.codewars.com/kata/54bf1c2cd5b56cc47f0007a1/train/cpp


#include <iostream>
#include <map>
#include <algorithm>

size_t duplicateCount(const std::string& in);

size_t duplicateCount(const char* in) {
    std::string st = in;
    std::transform(st.begin(), st.end(), st.begin(), ::tolower);

    std::map<char, int> counter;
    
    for(size_t i = 0; i < st.size(); ++i) {
        ++counter[st[i]];
    }

    size_t occur = 0;

    for(auto i : counter) {
        if(i.second > 1) {
            occur += 1;
        }
    }

    return occur;
}

int main() {
    char* in = new char[16];

    std::cin >> in;
    std::cout << duplicateCount(in) << "\n";

    return 0;
}
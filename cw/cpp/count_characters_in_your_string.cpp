// https://www.codewars.com/kata/52efefcbcdf57161d4000091/train/cpp


#include <iostream>
#include <map>

std::map<char, unsigned> count(const std::string& string) {
    std::map<char, unsigned> counter;
    for(int i = 0; i < string.size(); ++i) {
        counter[string[i]] += 1;
    }

    std::map<char, unsigned> count;
    for(auto j : counter) {
        count.insert({j.first, j.second});
    }

    return count;
}

int main() {
    std::string string;
    std::cin >> string;
    std::map<char, unsigned> c = count(string);
    
    for(auto it = c.begin(); it != c.end(); ++it) {
        std::cout << it->first << ", " << it->second << "\n";
    }

    return 0;
}
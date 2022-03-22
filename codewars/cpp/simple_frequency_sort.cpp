#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

std::vector<int> solve(const std::vector<int> &vec) {
    std::map<int, int> freq;

    for(auto &i : vec) {
        if(freq.find(i) != freq.end()) {
            ++freq[i];
        } else {
            freq.insert(std::make_pair(i, 1));
        }
    }

    std::vector<int> temp;

    std::vector<int> sorted;

    return sorted;
}

int main() {
    std::vector<int> vec = {2,3,5,3,7,9,5,3,7};

    std::vector<int> out = solve(vec);
}
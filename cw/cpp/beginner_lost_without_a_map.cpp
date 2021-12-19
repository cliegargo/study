// https://www.codewars.com/kata/57f781872e3d8ca2a000007e/train/cpp

#include <iostream>
#include <vector>
#include <iterator>

std::vector<int> maps(const std::vector<int>& values) {
    std::vector<int> doubled;

    for(auto i : values) {
        doubled.push_back(i * 2);
    }

    return doubled;
}

int main() {
    int lim, val;
    std::vector<int> values;

    std::cin >> lim;
    for(int i = 0; i < lim; ++i) {
        std::cin >> val;
        values.push_back(val);
    }

    std::vector<int> out = maps(values);
    copy(out.begin(), out.end(), std::ostream_iterator<int>(std::cout, " "));

    return 0;
}
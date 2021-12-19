// https://www.codewars.com/kata/5899dc03bc95b1bf1b0000ad/train/cpp


#include <iostream>
#include <vector>
#include <iterator>

std::vector<int> invert(std::vector<int> values) {
    std::vector<int> inverted;

    for(std::vector<int>::iterator it = values.begin(); it != values.end(); ++it) {
        if(*it > 0) {
            *it = -*it;
            inverted.push_back(*it);
        } else {
            *it -= *it * 2;
            inverted.push_back(*it);
        }
    }

    return inverted;
}

int main() {
    int limit, nums;

    std::cin >> limit;

    std::vector<int> values;

    for(int i = 0; i < limit; ++i) {
        std::cin >> nums;
        values.push_back(nums);
    }

    std::vector<int> inverted = invert(values);
    copy(inverted.begin(), inverted.end(), std::ostream_iterator<int>(std::cout, " "));

    return 0;
}
// https://www.codewars.com/kata/52597aa56021e91c93000cb0/train/cpp


#include <iostream>
#include <vector>
#include <iterator>

std::vector<int> move_zeroes(const std::vector<int>& input) {
    std::vector<int> moved;

    for(auto i : input) {
        if(i > 0 || i < 0) {
            moved.push_back(i);
        }
    }

    for(auto j : input) {
        if(j == 0) {
            moved.push_back(j);
        }
    }

    return moved;
}

int main() {
    int l, n;
    std::vector<int> input;
    std::cin >> l;
    for(int i = 0; i < l; ++i) {
        std::cin >> n;
        input.push_back(n);
    }

    std::vector<int> out = move_zeroes(input);
    copy(out.begin(), out.end(), std::ostream_iterator<int>(std::cout, " "));
    
    return 0;
}
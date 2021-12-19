// https://www.codewars.com/kata/590e03aef55cab099a0002e8/train/cpp


#include <iostream>
#include <vector>
#include <iterator>

std::vector<int> incrementer(std::vector<int> nums) {
    std::vector<int> incremented;
    int i = 1;

    for(auto n : nums) {
        if((n + i) > 9) {
            incremented.push_back((n + i) % 10);
        } else {
            incremented.push_back(n + i);
        }
        ++i;
    }

    return incremented;
}

int main() {
    int l, n;
    std::vector<int> nums;
    std::cin >> l;
    for(int i = 0; i < l; ++i) {
        std::cin >> n;
        nums.push_back(n);
    }

    std::vector<int> inc = incrementer(nums);
    copy(inc.begin(), inc.end(), std::ostream_iterator<int>(std::cout, " "));
    return 0;
}
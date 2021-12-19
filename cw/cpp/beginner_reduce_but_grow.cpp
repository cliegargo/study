// https://www.codewars.com/kata/57f780909f7e8e3183000078/train/cpp


#include <iostream>
#include <vector>

int grow(std::vector<int> nums) {
    int product = 1;

    for(int i = 0; i < nums.size(); ++i) {
        product *= nums[i];
    }

    return product;
}

int main() {
    int lim, val;
    std::vector<int> nums;
    std::cin >> lim;
    for(int i = 0; i < lim; ++i) {
        std::cin >> val;
        nums.push_back(val);
    }

    std::cout << grow(nums) << "\n";

    return 0;
}
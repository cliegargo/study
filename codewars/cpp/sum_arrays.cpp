// https://www.codewars.com/kata/53dc54212259ed3d4f00071c/train/cpp


#include <iostream>
#include <vector>

int sum(std::vector<int> nums) {
    int sum = 0;

    for(auto i : nums) {
        sum += i;
    }

    return sum;
}

int main() {
    int limit, value;
    std::vector<int> nums;

    std::cin >> limit;
    for(int i = 0; i < limit; ++i) {
        std::cin >> value;
        nums.push_back(value);
    }
    std::cout << sum(nums) << std::endl;

    return 0;
}
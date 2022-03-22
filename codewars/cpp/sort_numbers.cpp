// https://www.codewars.com/kata/5174a4c0f2769dd8b1000003/train/cpp


#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> solution(std::vector<int> nums) {
	std::sort(nums.begin(), nums.end());
	return nums;
}

int main() {
	std::vector<int> nums = {1, 2, 3, 10, 5};

	for(auto &i : solution(nums)) {
		std::cout << i << '\n';
	}

	return 0;
}

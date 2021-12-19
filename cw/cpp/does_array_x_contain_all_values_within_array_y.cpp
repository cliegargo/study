// https://www.codewars.com/kata/5143cc9694a24abcd2000001/train/cpp


#include <iostream>
#include <vector>
#include <map>

bool contains_all(const std::vector<int>& arr, const std::vector<int>& target) {
	std::map<int, int> nums;

	for(int i = 0; i < arr.size(); ++i) {
		nums.insert(std::pair<int, int>(arr[i], arr[i]));
	}


	for(auto &i : target) {
		auto it = nums.find(i);
		if(it == nums.end()) {
			return false;
		}
	}

	return true;
}

int main() {
	std::vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::vector<int> y = {1, 2, 6};

	std::vector<int> a = {1, 15, 6};
    std::vector<int> b = {10};

	std::cout << contains_all(a, b) << '\n';

	return 0;
}

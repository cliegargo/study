// https://www.codewars.com/kata/5a431c0de1ce0ec33a00000c/train/cpp


#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> evenNumbers(std::vector<int> arr, int n) {
	std::vector<int> even;

	for(int i = arr.size() - 1; i >= 0; --i) {
		if(arr[i] % 2 == 0 && n != 0) {
			even.push_back(arr[i]);
			n -= 1;
		}
	}
	
	std::reverse(even.begin(), even.end());
	return even;
}

int main() {
	std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = 3;

	std::vector<int> out = evenNumbers(arr, n);

	for(auto &i : out) {
		std::cout << i << '\n';
	}

	return 0;
}

// https://www.codewars.com/kata/5417423f9e2e6c2f040002ae/train/cpp


#include <iostream>
#include <vector>

std::vector<int> digitize(const int& n) {
	std::string s = std::to_string(n);
	std::vector<int> digits;

	for(int i = 0; i < s.size(); ++i) {
		digits.push_back(s[i] - '0');
	}

	return digits;
}

int main() {
	int n;

	std::cin >> n;
	std::vector<int> out = digitize(n);

	for(auto &i : out) {
		std::cout << i << '\n';
	}

	return 0;
}

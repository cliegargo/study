// https://www.codewars.com/kata/515f51d438015969f7000013/train/cpp


#include <iostream>
#include <vector>
#include <cstdlib>


std::vector<std::vector<int>> pyramid(std::size_t n) {
	std::vector<std::vector<int>> pyrarr;
	std::vector<int> ones;

	for(unsigned long i = 0; i < n; ++i) {
		for(unsigned long j = i; j < i + 1; ++j) {
			ones.push_back(1);
		}
		pyrarr.push_back(ones);
	}

	return pyrarr;
}

int main() {
	std::size_t n;

	std::cin >> n;

	std::vector<std::vector<int>> out = pyramid(n);

	for(int i = 0; i < out.size(); ++i) {
		for(int j = 0; j < out[i].size(); ++j) {
			std::cout << out[i][j] << ' ';
		}
		putchar('\n');
	}


	return 0;
}

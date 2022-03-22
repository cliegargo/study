// https://www.codewars.com/kata/5841f680c5c9b092950001ae/train/cpp


#include <iostream>
#include <vector>

std::vector<int> generate_integers(int m, int n) {
	std::vector<int> numbers;

	for(int i = m; i < n + 1; ++i) {
		numbers.push_back(i);
	}

	return numbers;
}

int main() {
	int m, n;
	std::cin >> m >> n;

	std::vector<int> numbers = generate_integers(m, n);

	for(auto &i : numbers) {
		std::cout << i;
	}

	return 0;
}

#include <iostream>
#include <queue>
#include <vector>
#include <numeric>

int addAll(const std::vector<int> numbers) {
	int cost = 0;

	std::vector<int> added;
	int add;

	for(unsigned long i = 0; i < numbers.size(); ++i) {
		if(i == 0) {
			add = numbers[i] + numbers[i + 1];
			std::cout << numbers[i] << "\t+\t" << numbers[i + 1] << "\t=\t" << add << '\n';
			cost = add;
		} else {
			add = numbers[i] + cost;
			std::cout << numbers[i] << "\t+\t" << numbers[i + 1] << "\t=\t" << add << '\n';
			cost = add;
		}
		//cost = numbers[i] + numbers[i + 1];
		added.push_back(cost);
	}

	return std::accumulate(added.begin(), added.end(), 0);
}

int main() {
	std::vector<int> numbers = {1, 2, 3, 4};

	std::cout << addAll(numbers) << '\n';

	return 0;
}

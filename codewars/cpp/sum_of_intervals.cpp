#include <iostream>
#include <vector>
#include <map>

int sum_intervals(std::vector<std::pair<int, int>> intervals) {
	std::vector<int> numbers;
	for(auto &i : intervals) {
		numbers.push_back(i.first);
		numbers.push_back(i.second);
	}

	std::map<int, int> count;
	for(auto &i : numbers) {
		if(count.find(i) != count.end()) {
			count[i] += 1;
		} else {
			count[i] = 1;
		}
	}

	std::vector<int> sorted;
	for(auto &i : count) {
		sorted.push_back(i.first);
	}

	int sum = 0;
	for(int i = 0; i < sorted.size(); ++i) {
		if(sorted[i + 1] != 0) {
			std::cout << sorted[i] << '\t' << sorted[i + 1] << "\t=\t" << sorted[i] - sorted[i + 1] << '\n';
			sum += sorted[i] - sorted[i + 1];
		}
	}

	return sum *= -1;
}


int main() {
	std::vector<std::pair<int, int>> intervals;

	//intervals = {{1,2},{6,10},{11,15}};
	//intervals = {{1,4},{7,10},{3,5}};
	intervals = {{1,5}, {10,20}, {1,6}, {16,19}, {5,11}};

	std::cout << sum_intervals(intervals) << '\n';

	return 0;
}

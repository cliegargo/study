#include <iostream>
#include <utility>
#include <vector>

std::vector<std::pair<int, int>> twos_difference(const std::vector<int> &vec) {
	std::vector<std::pair<int, int>> pairs;
	
	for(int i = 0; i < vec.size(); ++i) {
		for(int j = i; j < vec.size(); ++j) {
			if(vec[j] - vec[i] == 2) {
				pairs.push_back(std::make_pair(vec[i], vec[j]));
			} else if(vec[i] - vec[j] == 2) {
				pairs.push_back(std::make_pair(vec[j], vec[i]));
			}
		}
	}

	return pairs;
}

int main() {
	std::vector<int> a = {1, 2, 3, 4};
	std::vector<int> b = {1, 3, 4, 6};
	std::vector<int> c = {0, 3, 1, 4};

	std::vector<std::pair<int, int>> out = twos_difference(c);

	for(auto &i : out) {
		std::cout << i.first << "\t:\t" << i.second << '\n';
	}

	return 0;
}

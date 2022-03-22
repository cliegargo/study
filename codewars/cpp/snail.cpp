#include <iostream>
#include <vector>

std::vector<int> snail(const std::vector<std::vector<int>> &snail_map) {
	std::vector<int> snail;

	for(int i = 0; i < snail_map.size(); ++i) {
		for(int j = 0; j < snail_map[i].size(); ++j) {
			int current = snail_map[i][j];
			int last = snail_map[i][snail_map.size() - 1];


			snail.push_back(current);

			if(current == last) {
				std::cout << "Last: ";
				for(int k = 0; k < snail_map[i].size(); ++k) {
					std::cout << last << '\n';
					//snail.push_back(last);
				}
			} else {
				std::cout << "Current: " << snail_map[i][j] << '\t';
			}
		}
		putchar('\n');
	}





	return snail;
}

int main() {
	std::vector<std::vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

	std::vector<int> out = snail(v);

	for(auto &i : out) {
		std::cout << i << '\n';
	}
}

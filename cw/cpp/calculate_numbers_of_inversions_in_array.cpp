#include <iostream>
#include <vector>

class Kata {
public:
	int countInversions(const std::vector<int>& vec) {
		int counter = 0;
		std::vector<int> v;

		int high = vec[0];

		// 1 2 3 4
		//    /\
		// 1 3 2 4
		// \ | |/
		//  \| |
		//   \/|
		//   /\|
		//  /| |\
		// 4 1 2 3
		// |  \| /
		// |   |/
		// |  /|\
		// 4 3 2 1
		for(int i = 0; i < vec.size(); ++i) {
			std::cout << ">>>\t" << vec[i] << '\n';
			if(high >= vec[i + 1]) {
				v.push_back(high);
				high = vec[i + 1];
			} else if(high <= vec[i + 1]) {
				v.push_back(vec[i + 1]);
				high = vec[i];
			}
		}

		for(auto &i : v) {
			std::cout << i << ' ';
		}
		putchar('\n');
		return counter;
	}
};

int main() {
	std::vector<int> vec = {2, 1, 3};

	Kata kata;
	std::cout << kata.countInversions(vec) << '\n';

	return 0;
}

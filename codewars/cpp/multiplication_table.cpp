// https://www.codewars.com/kata/534d2f5b5371ecf8d2000a08/train/cpp


#include <iostream>
#include <vector>

std::vector<std::vector<int>> multiplication_table(int n) {
	std::vector<std::vector<int>> table;

	int multiplicand = 1;
	int multiplier = 1;

	for(int i = 0; i < n; ++i) {
		std::vector<int> mutliplication;

		for(int j = 0; j < n; ++j) {
			mutliplication.push_back(multiplicand * multiplier);
			multiplier += 1;
		}

		table.push_back(mutliplication);
		
		multiplier = 1;
		multiplicand += 1;
	}


	return table;
}

int main() {
	int n;

	std::cin >> n;

	std::vector<std::vector<int>> out = multiplication_table(n);

	for(int i = 0; i < out.size(); ++i) {
		for(int j = 0; j < out[i].size(); ++j) {
			std::cout << out[i][j] << ' ';
		}
		putchar('\n');
	}


	//std::vector<std::vector<int>> tb = {{1, 2, 3}, {2, 4, 6}, {3, 6, 9}};
	//std::cout << tb[0][2] << '\n';
	return 0;
}

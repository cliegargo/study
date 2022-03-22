#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

std::string alphabetized(const std::string& str) {
	std::vector<char> chars;
	for(auto &i : str) {
		chars.push_back(i);
	}

	std::map<char, int> alphabet = {
		{'A', 1}, {'a', 2},
		{'B', 3}, {'b', 4},
		{'C', 5}, {'c', 6},
		{'D', 7}, {'d', 8},
		{'E', 9}, {'e', 10},
		{'F', 11}, {'f', 12},
		{'G', 13}, {'g', 14},
		{'H', 15}, {'h', 16},
		{'I', 17}, {'i', 18},
		{'J', 19}, {'j', 20},
		{'K', 21}, {'k', 22},
		{'L', 23}, {'l', 24},
		{'M', 25}, {'m', 26},
		{'N', 27}, {'n', 28},
		{'O', 29}, {'o', 30},
		{'P', 31}, {'p', 32},
		{'Q', 33}, {'q', 34},
		{'R', 35}, {'r', 36},
		{'S', 37}, {'s', 38},
		{'T', 39}, {'t', 40},
		{'U', 41}, {'u', 42},
		{'V', 43}, {'v', 44},
		{'W', 45}, {'w', 46},
		{'X', 47}, {'x', 48},
		{'Y', 49}, {'y', 50},
		{'Z', 51}, {'z', 52},
	};

	std::vector<int> pos;

	for(auto &i : chars) {
		auto it = alphabet.find(i);
		if(it != alphabet.end()) {
			pos.push_back(it->second);
		}
	}

	std::sort(pos.begin(), pos.end());

	std::string sorted = "";

	for(auto &i : pos) {
		if(i % 2 == 0) {
			sorted += (char)((96 + i) - (i / 2));
			std::cout << (char)((96 + i) - (i / 2))  << '\n';
		} else {
			sorted += (char)((64 + i) - (i / 2));
			std::cout << (char)((64 + i) - (i / 2))  << '\n';
		}
	}

	return sorted;
}

int main() {
	std::string str;

	getline(std::cin, str);
	std::cout << alphabetized(str) << '\n';

	return 0;
}

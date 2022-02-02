// https://www.codewars.com/kata/59c633e7dcc4053512000073/train/cpp


#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

std::vector<std::string> split(const std::string &s) {
	std::string temp = "";
	std::vector<std::string> cons;

	for(unsigned int i = 0; i < s.size(); ++i) {
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
			cons.push_back(temp);
			temp = "";
		} else {
			temp += s[i];
		}
	}
	cons.push_back(temp);

	return cons;
}

int solve(const std::string &s) {
	std::vector<std::string> cons = split(s);

	std::map<char, int> alphabet = {
		{'a', 1}, {'b', 2}, {'c', 3}, {'d', 4}, {'e', 5}, {'f', 6}, {'g', 7},
		{'h', 8}, {'i', 9}, {'j', 10}, {'k', 11}, {'l', 12}, {'m', 13},
		{'n', 14}, {'o', 15}, {'p', 16}, {'q', 17}, {'r', 18}, {'s', 19},
		{'t', 20}, {'u', 21}, {'v', 22}, {'w', 23}, {'x', 24}, {'y', 25},
		{'z', 26},
	};

	std::vector<int> sums;

	for(auto &words: cons) {
		int add = 0;
		for(auto &chars : words) {
			auto it = alphabet.find(chars);
			if(it != alphabet.end()) {
				add += it->second;
			}
		}
		sums.push_back(add);
		add = 0;
	}

	return *std::max_element(sums.begin(), sums.end());
}


int main() {
	std::string s;

	std::cin >> s;
	std::cout << solve(s) << '\n';

	return 0;
}

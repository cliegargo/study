// https://www.codewars.com/kata/5d50e3914861a500121e1958/train/cpp


#include <iostream>
#include <vector>
#include <map>

char add_letters(std::vector<char> letters) {
	if(letters.empty()) {
		return 'z';
	}

	std::map<char, int> alpha = {
		{'a', 1}, {'b', 2}, {'c', 3}, {'d', 4}, {'e', 5}, {'f', 6}, {'g', 7},
		{'h', 8}, {'i', 9}, {'j', 10}, {'k', 11}, {'l', 12}, {'m', 13},
		{'n', 14}, {'o', 15}, {'p', 16}, {'q', 17}, {'r', 18}, {'s', 19},
		{'t', 20}, {'u', 21}, {'v', 22}, {'w', 23}, {'x', 24}, {'y', 25},
		{'z', 26}
    };

	int sum = 0;

	for(size_t i = 0; i < letters.size(); ++i) {
		auto it = alpha.find(letters[i]);
		if(it != alpha.end()) {
			for(auto c : alpha) {
				if(c.first == letters[i]) {
					sum += c.second;
				}
			}
		}
	}

	char letter;

	if(sum > 26) {
		while(!(sum <= 26)) {
			sum -= 26;
		}
		for(auto &i : alpha) {
			if(i.second == sum) {
				letter = i.first;
			}
		}
	} else {
		for(auto &i : alpha) {
			if(i.second == sum) {
				letter = i.first;
			}
		}
	}		

	return letter;
}

int main() {
	int n;
	std::cin >> n;
	std::vector<char> letters;
	char c;


	for(int i = 0; i < n; ++i) {
		std::cin >> c;
		letters.push_back(c);
	}

	std::cout << add_letters(letters) << '\n';

	return 0;
}

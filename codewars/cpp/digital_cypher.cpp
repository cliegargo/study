// https://www.codewars.com/kata/592e830e043b99888600002d/train/cpp


#include <iostream>
#include <vector>
#include <unordered_map>

class Kata {
public:
	static std::vector<int> Encode(std::string str, int n) {
		std::unordered_map<char, int> pattern = {
			{'a', 1}, {'b', 2}, {'c', 3}, {'d', 4}, {'e', 5}, {'f', 6},
			{'g', 7}, {'h', 8}, {'i', 9}, {'j', 10}, {'k', 11}, {'l', 12},
			{'m', 13}, {'n', 14}, {'o', 15}, {'p', 16}, {'q', 17}, {'r', 18},
			{'s', 19}, {'t', 20}, {'u', 21}, {'v', 22}, {'w', 23}, {'x', 24},
			{'y', 25}, {'z', 26}
		};

		std::vector<int> val;
		for(auto &i : str) {
			if(pattern.find(i) != pattern.end())
				val.push_back(pattern.find(i)->second);
		}

		std::vector<int> key;
		std::string s = std::to_string(n);
		int idx = 0;
		while(key.size() != val.size()) {
			if(idx == s.size()) {
				idx = 0;
			} else {
				key.push_back(s[idx] - '0');
				idx += 1;
			}
		}

		std::vector<int> encoded;
		for(unsigned long i = 0; i < val.size(); ++i)
			encoded.push_back(val[i] + key[i]);

		return encoded;
	}
};

int main() {
	std::string str;
	int n;

	std::cin >> str >> n;

	Kata kata;
	std::vector<int> out = kata.Encode(str, n);;

	return 0;
}

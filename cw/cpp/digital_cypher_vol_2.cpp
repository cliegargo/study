// https://www.codewars.com/kata/592edfda5be407b9640000b2/train/cpp


#include <iostream>
#include <vector>
#include <unordered_map>

class Kata {
public:
	static std::string Decode(std::vector<int> code, int n) {
		std::vector<int> key;
		std::string s = std::to_string(n);
		unsigned long idx = 0;
		while(key.size() != code.size()) {
			if(idx == s.size()) {
				idx = 0;
			} else {
				key.push_back(s[idx] - '0');
				idx += 1;
			}
		}

		std::unordered_map<int, char> pattern = {
			{1, 'a'}, {2, 'b'}, {3, 'c'}, {4, 'd'}, {5, 'e'}, {6, 'f'},
			{7, 'g'}, {8, 'h'}, {9,'i' }, {10, 'j'}, {11, 'k'}, {12, 'l'},
			{13, 'm'}, {14, 'n'}, {15, 'o'}, {16, 'p'}, {17, 'q'}, {18, 'r'},
			{19, 's'}, {20, 't'}, {21, 'u'}, {22, 'v'}, {23, 'w'}, {24, 'x'},
			{25, 'y'}, {26, 'z'}
		};

		std::string decoded;
		for(unsigned long i = 0; i < code.size(); ++i) {
			if(pattern.find(code[i] - key[i]) != pattern.end())
				decoded += pattern.find(code[i] - key[i])->second;
		}

		return decoded;
	}
};

int main() {
	std::vector<int> code = {14, 10, 22, 29, 6, 27, 19, 18, 6, 12, 8};
	int n = 1939;

	Kata kata;
	std::cout << kata.Decode(code, n) << '\n';

	return 0;
}

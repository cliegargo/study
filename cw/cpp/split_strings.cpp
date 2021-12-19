// https://www.codewars.com/kata/515de9ae9dcfc28eb6000001/train/cpp


#include <iostream>
#include <vector>

std::vector<std::string> solution(const std::string &s) {
	std::vector<std::string> split;
	
	for(int i = 0; i < s.size(); i += 2) {
		if(s.substr(i, 2).size() == 2) {
			split.push_back(s.substr(i, 2));
		} else {
			split.push_back(s.substr(i, 2) + '_');
		}
	}

	return split;
}

int main() {
	std::string s;

	std::cin >> s;

	std::vector<std::string> out = solution(s);

	for(auto &i : out) {
		std::cout << i << '\n';
	}

	return 0;
}

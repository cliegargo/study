// https://www.codewars.com/kata/57e76bc428d6fbc2d500036d/train/cpp


#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> string_to_array(const std::string& s) {
	std::string x = "";
	std::vector<std::string> v;

	for(auto &c : s) {
		if(c != ' ') {
			x += c;
		} else {
			v.push_back(x);
			x = "";
		}
	}
	v.push_back(x);

	return v;
}

int main() {
	std::string s;

	getline(std::cin, s);

	std::vector<std::string> out = string_to_array(s);

	for(int i = 0; i < out.size(); ++i) {
		std::cout << i << ":\t" << out[i] << '\n';
	}

	return 0;
}

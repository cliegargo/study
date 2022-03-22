// https://www.codewars.com/kata/556025c8710009fc2d000011/train/cpp


#include <iostream>
#include <map>
#include <algorithm>

std::string greekLeet(std::string str) {
	std::map<char, std::string> greek_leet = {
		{'a', "α"}, {'b', "β"}, {'d', "δ"}, {'e', "ε"}, {'i', "ι"}, {'k', "κ"},
		{'n', "η"}, {'o', "θ"}, {'p', "ρ"}, {'r', "π"}, {'t', "τ"}, {'u', "μ"},
		{'v', "υ"}, {'w', "ω"}, {'x', "χ"}, {'y', "γ"}
	};

	std::transform(str.begin(), str.end(), str.begin(), ::tolower);

	std::string greek_leet_case = "";

	for(auto &i : str) {
		auto it = greek_leet.find(i);

		if(it != greek_leet.end()) {
			greek_leet_case += it->second;
		} else {
			greek_leet_case += i;
		}
	}

	return greek_leet_case;
}

int main() {
	std::string str;
	getline(std::cin, str);

	std::cout << greekLeet(str) << '\n';

	return 0;
}

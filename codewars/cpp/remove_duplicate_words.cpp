#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

std::string removeDuplicateWords(const std::string& str) {
	std::vector<std::string> words;
	std::string tmp = "";

	for(auto &c : str) {
		if(c != ' ') {
			tmp += c;
		} else {
			words.push_back(tmp);
			tmp = "";
		}
	}
	words.push_back(tmp);

	std::unordered_map<std::string, int> count;

	for(auto &w : words) {
		if(count.find(w) != count.end()) {
			count[w] += 1;
		} else {
			count[w] = 1;
		}
	}

	for(auto &c : count) {
		std::cout << c.first << "\t:\t" << c.second << '\n';
	}




	return "";
}

int main() {
	std::string s = "alpha beta beta gamma gamma gamma delta alpha beta beta gamma gamma gamma delta";

	std::cout << removeDuplicateWords(s) << '\n';

	return 0;
}

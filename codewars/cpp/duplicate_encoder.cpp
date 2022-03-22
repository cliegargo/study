// https://www.codewars.com/kata/54b42f9314d9229fd6000d9c/train/cpp


#include <iostream>
#include <map>

std::string duplicate_encoder(const std::string& word) {
	std::map<char, int> count;

	for(unsigned long i = 0; i < word.size(); ++i) {
		count[tolower(word[i])] += 1;
	}

	std::string encode;

	for(unsigned long i = 0; i < word.size(); ++i) {
		auto it = count.find(tolower(word[i]));
		if(it != count.end()) {
			if(it->second == 1) {
				encode += "(";
			} else {
				encode += ")";
			}
		}
	}

	return encode;
}

int main() {
	std::string word;

	getline(std::cin, word);
	std::cout << duplicate_encoder(word) << '\n';

	return 0;
}

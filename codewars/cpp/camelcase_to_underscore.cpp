#include <iostream>
#include <vector>

class CamelCaseTranslator {
	public: static std::string toUnderScore(std::string s) {
		std::vector<std::string> words;

		std::string temp = std::to_string(s[0]);

		for(unsigned int i = 0; i < s.size(); ++i) {
			if(islower(s[i])) {

			} else {
			}
		}
		words.push_back(temp);

		for(auto &i : words) {
			std::cout << i << '_';
		}
		putchar('\n');


		std::string underscore = "";

		return underscore;
	};
};

int main() {
	CamelCaseTranslator cct;

	std::string s = "ThisIsACamelCaseString";
	//std::cin >> s;
	std::cout << cct.toUnderScore(s) << '\n';

	return 0;
}

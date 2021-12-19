// https://www.codewars.com/kata/580755730b5a77650500010c/train/cpp


#include <iostream>

std::string sortMyString(const std::string& s) {
	std::string even;
	std::string odd;

	for(int i = 0; i < s.size(); ++i) {
		if(i % 2 == 0) {
			even += s[i];
		} else {
			odd += s[i];
		}
	}

	return even + ' ' + odd;
}

int main() {
	std::string s;

	std::cin >> s;
	std::cout << sortMyString(s) << '\n';

	return 0;
}

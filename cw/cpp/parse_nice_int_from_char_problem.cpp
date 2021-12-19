// https://www.codewars.com/kata/557cd6882bfa3c8a9f0000c1/train/cpp


#include <iostream>

int get_age(const std::string& she_said) {
	return she_said[0] - '0';
}

int main() {
	std::string she_said;

	getline(std::cin, she_said);
	std::cout << get_age(she_said) << '\n';

	return 0;
}

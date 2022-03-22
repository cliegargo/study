#include <iostream>
#include <map>

std::string swap(std::string s, int n) {
	std::multimap<char, int> det;

	for(auto &i : s) {
		if(isalpha(i)) {

		}
	}

	return "";
}

int main() {
	std::string s;

	getline(std::cin, s);
	int n;
	std::cin >> n;
	std::cout << swap(s, n) << '\n';

	return 0;
}

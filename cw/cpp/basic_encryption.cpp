#include <iostream>
#include <string>

std::string encrypt(std::string text, int rule) {
	char c;
	for(int i = 0; i < text.size(); ++i) {
		c = text[i + rule];
		putchar(c);

		//std::cout << text[i] << '\n';
	}


	return "";
}

int main() {
	std::string text;
	int rule;

	getline(std::cin, text);
	std::cin >> rule;

	std::cout << encrypt(text, rule) << '\n';
	
	return 0;
}

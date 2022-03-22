#include <iostream>

std::string encrypt(std::string text, int n) {
	std::string enc;
	for(int i = 0; i < n; ++i) {
		enc[i] = text[i+1];
	}

	return enc;
}

std::string decrypt(std::string encryptedText, int n) {
	return "";
}

int main() {
	std::string text;
	getline(std::cin, text);
	int n;
	std::cin >> n;

	std::cout << encrypt(text, n) << '\n';

	return 0;
}

#include <iostream>
#include <map>

std::map<char, char> make_cipher(std::string key) {
	std::map<char, char> cipher;

	for(int i = 0; i < key.size(); ++i) {
		if(i % 2 == 0) {
			cipher[key[i]] = key[i + 1];
			cipher[toupper(key[i])] = toupper(key[i + 1]);
		} else {
			cipher[key[i]] = key[i - 1];
			cipher[toupper(key[i])] = toupper(key[i - 1]);
		}
	}

	return cipher;
}

std::string encode(std::string str, std::string key) {
	std::map<char, char> cipher = make_cipher(key);

	std::string encoded;
	
	for(auto &i : str) {
		auto it = cipher.find(i);
		if(it != cipher.end()) {
			encoded += it->second;
		} else {
			encoded += i;
		}
	}

	return encoded;
}

std::string decode(std::string str, std::string key) {
	std::map<char, char> cipher = make_cipher(key);

	std::string decoded;

	for(auto &i : str) {
		auto it = cipher.find(i);
		if(it != cipher.end()) {
			decoded += it->second;
		} else {
			decoded += i;
		}
	}

	return decoded;
}

int main() {
	//std::string str;
	//getline(std::cin, str);

	//std::string key;
	//getline(std::cin, key);

	//std::string str = "Ala has a cat";
	std::string str = "ABCD";
	std::string key = "gaderypoluki";

	std::cout << encode(str, key) << '\n';
	std::cout << decode(encode(str, key), key) << '\n';

	return 0;
}

// https://www.codewars.com/kata/55b051fac50a3292a9000025/train/cpp


#include <iostream>
#include <map>
#include <sstream>

long long filter_string(const std::string& value) {
	std::string temp;

	std::map<char, char> chars = {
		{'0', '0'}, {'1', '1'}, {'2', '2'}, {'3', '3'}, {'4', '4'},
        {'5', '5'}, {'6', '6'}, {'7', '7'}, {'8', '8'}, {'9', '9'}
	};

	for(int i = 0; i < value.size(); ++i) {
		auto it = chars.find(value[i]);
		if(it != chars.end()) {
			temp += it->second;
		}
	}
	
	long long numbers;

	std::stringstream(temp) >> numbers;

	return numbers;
}

int main() {
	std::string value;

	std::cin >> value;
	std::cout << filter_string(value) << '\n';

	return 0;
}

// https://www.codewars.com/kata/54ba84be607a92aa900000f1/train/cpp


#include <iostream>
#include<algorithm>
#include <map>

bool is_isogram(std::string str) {
	std::map<char, int> count;

	std::transform(str.begin(), str.end(), str.begin(), ::tolower);
	
	for(auto &i : str) {
		if(count.find(i) != count.end()) {
			count[i]++;
		} else {
			count.insert(std::make_pair(i, 1));
		}
	}

	for(auto &i : count) {
		if(i.second > 1) {
			return false;
		}
	}

	return true;
}

int main() {
	std::string str;

	std::cin >> str;
	std::cout << is_isogram(str) << '\n';

	return 0;
}
// https://www.codewars.com/kata/57ee31c5e77282c24d000024/train/cpp


#include <iostream>
#include <vector>
#include <map>

std::string paul(const std::vector<std::string> &x) {
	std::map<std::string, int> score_map = {
		{"kata", 5}, {"Petes kata", 10}, {"life", 0}, {"eating", 1}
	};

	int score = 0;

	for(auto &i : x) {
		auto it = score_map.find(i);
		score += it->second;
	}

	if(score < 40) {
		return "Super happy!";
	} else if(score < 70 && score >= 40) {
		return "Happy!";
	} else if(score < 100 && score >= 70) {
		return "Sad!";
	} else {
		return "Miserable!";
	}
}

int main() {
	std::vector<std::string> x = {"life", "eating", "life"};

	std::cout << paul(x) << '\n';

	return 0;
}

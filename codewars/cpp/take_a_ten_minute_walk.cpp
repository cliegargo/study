#include <iostream>
#include <vector>

bool isValidWalk(std::vector<char> walk) {
	char current;

	int minute = 0;

	for(auto &i : walk) {
		if(current != i) {
			minute += 1;
		}
		current = i;
	}

	if(minute != 10) {
		return false;
	}

	return true;
}

int main() {
	//std::vector<char> walk = {'n','s','n','s','n','s','n','s','n','s'};
	std::vector<char> walk = {'n', 's'};

	std::cout << isValidWalk(walk) << '\n';

	return 0;
}

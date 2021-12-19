// https://www.codewars.com/kata/55830eec3e6b6c44ff000040/train/cpp


#include <iostream>
#include <vector>

std::string oddity(long long int n) {
	std::vector<int> divs;
	for(int i = 1; i < n + 1; ++i) {
		if(n % i == 0) {
			divs.push_back(i);
		}
	}

	if(divs.size() % 2 != 0 || divs.size() == 0) {
		return "odd";
	} else {
		return "even";
	}
}

int main() {
	long long int n;

	std::cin >> n;

	std::cout << oddity(n) << '\n';

	return 0;
}

#include <iostream>
#include <vector>

#define ULL unsigned long long int
#define ULLONG_MAX

std::string factorial(int factorial) {
	std::vector<ULL> f;
	std::vector<std::vector<ULL>> ff;
	ULL x = 1;
	ULL y;
	for(ULL i = 1; i < factorial + 1; ++i) {
		x *= i;
		std::cout << x << '\n';
		f.push_back(x);
	}







	for(auto &i : f) {
		std::cout << i << '\n';
	}


	/*
	for(int i = 0; i < ff.size(); ++i) {
		for(int j = 0; j < ff[i].size(); ++j) {
			std::cout << ff[i][j] << '\n';
		}
	}
	*/

	return "";
}

int main() {
	int n;
	std::cin >> n;
	std::cout << factorial(n) << '\n';
	return 0;
}

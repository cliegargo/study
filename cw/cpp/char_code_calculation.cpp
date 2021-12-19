// https://www.codewars.com/kata/57f75cc397d62fc93d000059/train/cpp


#include <iostream>
#include <vector>

int calc(const std::string& x) {
	std::vector<char> y;

	for(unsigned long i = 0; i < x.size(); ++i) {
		std::string s = std::to_string(x[i]);
		for(auto &j : s)
			y.push_back(j);
	}

	std::vector<char> z = y;

	for(unsigned long i = 0; i < z.size(); ++i) {
		if(z[i] == '7')
			z[i] = '1';
	}

	int yy = 0, zz = 0;

	for(auto &i : y)
		yy += i - '0';

	for(auto &i : z)
		zz += i - '0';

	return (yy >= zz) ? yy - zz : zz - yy;
}

int main() {
	std::string x;

	std::cin >> x;
	std::cout << calc(x) << '\n';

	return 0;
}

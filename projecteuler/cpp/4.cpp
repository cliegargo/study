/*
 * Largest palindrome product
 * Problem 4
 *
 * A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 * Find the largest palindrome made from the product of two 3-digit numbers.
 *
 * Answer:  906609
 * Completed on Mon, 22 Nov 2021, 17:09
 */


#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int n = 1000;

	std::vector<long long> x;
	std::vector<std::pair<int, int>> z;
	for(int i = 1; i < n + 1; ++i) {
		for(int j = i; j < n + 1; ++j) {
			x.push_back(i * j);
			z.push_back(std::make_pair(i, j));
		}
	}

	std::vector<long long> y;
	
	for(auto &i : x) {
		std::string s = std::to_string(i);
		std::reverse(s.begin(), s.end());
		y.push_back(std::stoi(s));
	}
	
	std::vector<long long> w;
	for(int i = 0; i < x.size(); ++i) {
		if(x[i] == y[i]) {
			w.push_back(x[i]);
		}
	}

	int palindrome = *max_element(w.begin(), w.end());
	int f = 0;
	int s = 0;
	for(int i = 0; i < z.size(); ++i) {
		if(z[i].first * z[i].second == palindrome) {
			f = z[i].first;
			s = z[i].second;
		}
	}

	std::cout << palindrome << " = " << f << " × " << s << '\n';

	return 0;
}

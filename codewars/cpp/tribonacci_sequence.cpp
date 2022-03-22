#include <iostream>
#include <vector>

std::vector<int> tribonacci(std::vector<int> signature, int n) {
	int f_term = signature[0];
	int s_term = signature[1];
	int t_term = signature[2];
	int n_term = 0;

	std::vector<int> result = {f_term, s_term, t_term};

	while(n_term < n) {
		n_term = f_term + s_term + t_term;
		result.push_back(n_term);
		t_term = s_term;
		s_term = f_term;
		f_term = n_term;
	}

	return result;
}

int main() {
	std::vector<int> a = {1, 1, 1};
	std::vector<int> b = {0, 1, 1};
	int n = 10;

	std::vector<int> out = tribonacci(b, n);

	for(auto &i : out) {
		std::cout << i << '\n';
	}

	return 0;
}

// https://www.codewars.com/kata/559a28007caad2ac4e000083/train/cpp


#include <iostream>

typedef unsigned long long ull;

class SumFct {
	public:
		static ull perimeter(int n) {
			ull f_term = 1;
			ull s_term = 1;
			ull n_term = 0;
			ull sum = f_term + s_term;

			for(int i = 2; i < n + 1; ++i) {
				n_term = f_term + s_term;
				sum += n_term;
				s_term = f_term;
				f_term = n_term;
			}

			return sum * 4;
		}
};

int main() {
	int n;

	std::cin >> n;

	SumFct out;

	std::cout << out.perimeter(n) << '\n';

	return 0;
}

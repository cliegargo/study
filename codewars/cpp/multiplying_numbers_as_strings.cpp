#include <iostream>
#include <vector>
#include <string>

std::string multiply(std::string a, std::string b) {
	std::string product;

	int carry = 0;
	int times = 1;
	std::vector<std::vector<int>> to_add;
	std::vector<int> v;

	// Check if a and b have the same size.
	if(a.size()==b.size()) {
		for(int i = a.size() - 1; i >= 0; --i) {
			for(int j = b.size() - 1; j >= 0; --j) {
				times = (a[i] - '0') * (b[j] - '0') + (carry);
				std::string temp = std::to_string(times);

				//std::cout << (a[i] - '0') << "\t*\t" << (b[j] - '0') << "\t=\t" << times << '\n';

				// Times + carry is over 9
				if((times + carry) > 9) {
					carry = temp[0] - '0';
					v.insert(v.begin(), temp[1] - '0');
				} else {
					v.insert(v.begin(), times);
					carry = 0;
				}
			}
			to_add.insert(to_add.begin(), v);
			v.clear();
		}

		if(carry > 0) {
			v.insert(v.begin(), 1);
		}

		/*
		if(carry > 0) {
			v.insert(v.begin(), 1);
		}
		*/
	} else {
	}

	int prod = 0;

	for(auto &i : to_add) {
		for(auto &j : i) {
			prod += j;
			std::cout << j << ' ';
		}
		putchar('\n');
	}
	std::cout << prod << '\n';

	return product;
}

int main() {
	std::string a, b;

	std::cin >> a >> b;
	std::cout << multiply(a, b) << '\n';

	return 0;
}

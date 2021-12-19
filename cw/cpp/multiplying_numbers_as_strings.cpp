#include <iostream>
#include <vector>
#include <string>

std::string multiply(std::string a, std::string b) {
	std::string product;

	int carry = 0;
	int times = 1;
	std::vector<int> v;

	// Check if a and b have the same size.
	if(a.size()==b.size()) {
		for(int i = a.size() - 1; i >= 0; --i) {
			for(int j = b.size() - 1; j >= 0; --j) {
				times = (a[i] - '0') * (b[j] - '0') + (carry);
				std::cout << "Times:\t" << times << '\n';
				if((times + carry) > 9) {
					std::cout << "Carry:\t" << carry << '\n';
					carry = std::to_string((a[i] - '0') * (b[j] - '0'))[0] - '0';
					v.insert(v.begin(), std::to_string((a[i] - '0') * (b[j] - '0'))[1] - '0');
				} else {
					std::cout << "Times:\t" << times << '\n';
					v.insert(v.begin(), times);
					carry = 0;
				}
			}
		}
		if(carry > 0) {
			v.insert(v.begin(), 1);
		}
	}

	for(auto &i : v) {
		std::cout << i << '\n';
	}

	return "";
}

int main() {
	std::string a, b;

	std::cin >> a >> b;
	std::cout << multiply(a, b) << '\n';

	return 0;
}

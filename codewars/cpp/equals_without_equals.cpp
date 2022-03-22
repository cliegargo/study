#include <iostream>

bool equals(int a, int b) {
	char q = 61;
	std::cout << q << q << '\n';
	return a == b ? true : false;
}

int main() {
	int a, b;

	std::cin >> a >> b;

	std::cout << equals(a, b) << '\n';

	return 0;
}

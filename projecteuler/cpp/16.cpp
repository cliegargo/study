/*
 * Power digit sum
 * Problem 16
 *
 * 215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
 * What is the sum of the digits of the number 21000?
 *
 * Answer:  1366
 * Completed on Thu, 18 Nov 2021, 03:09
 */


#include <iostream>
#include <cmath>

int sol(int x, int y) {
	auto exp = pow(x, y);
	
	std::string s_exp = std::to_string(exp);
	long long sum = 0;

	for(auto &i : s_exp) {
		if((i - '0') > 0) {
			sum += (i - '0');
		}
	}	
	
	return sum;
}

int main() {
	int x = 2;
	int y = 1000;
	
	std::cout << sol(x, y) << '\n';
	
	return 0;
}

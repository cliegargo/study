/*
 * Factorial digit sum
 * Problem 20
 *
 * n! means n × (n − 1) × ... × 3 × 2 × 1
 * For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
 * and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.
 * Find the sum of the digits in the number 100!
 *
 * Answer:  648
 * Completed on Thu, 18 Nov 2021, 02:39
 */


#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

boost::multiprecision::int128_t sol(int n) {
	boost::multiprecision::int1024_t factorial = 1;

	for(int i = 1; i < n + 1; ++i) {
		factorial *= i;
	}
	
	std::string s_fact = boost::lexical_cast<std::string>(factorial);
	
	boost::multiprecision::int128_t sum = 0;
	
	for(auto &c : s_fact) {
		sum += (c - '0');
	}
	
	return sum;
}

int main() {
	int n = 100;
	
	std::cout << sol(n) << '\n';
	
	return 0;
}

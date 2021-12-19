/*
 * Sum square difference
 * Problem 6
 * The sum of the squares of the first ten natural numbers is,
 * 		1^2 + 2^2 + ... 10^2 = 385
 * The square of the sum of the first ten natural numbers is,
 * 		(1 + 2 + ... 10)^2 = 55^2 = 3025
 * Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is
 *		3025 - 385 = 2640.
 * Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 *
 * Answer:  25164150
 * Completed on Thu, 18 Nov 2021, 02:49
 */


#include <iostream>
#include <cmath>

int sol(int n) {
	int sum_sqr = 0;
	
	for(int i = 1; i < n + 1; ++i) {
		sum_sqr += pow(i, 2);
	}
	
	int sqr_sum = 0;
	for(int i = 1; i < n + 1; ++i) {
		sqr_sum += i;
	}
	
	sqr_sum = pow(sqr_sum, 2);
	
	return sqr_sum - sum_sqr;
}

int main() {
	int n = 100;
	
	std::cout << sol(n) << '\n';
	
	return 0;
}

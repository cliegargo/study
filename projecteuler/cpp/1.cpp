/*
 * Multiples of 3 or 5
 * Problem 1
 *
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.
 *
 * Answer:  233168
 * Completed on Thu, 18 Nov 2021, 02:06
 */


#include <iostream>

int sol(int n) {
	int sum = 0;

	for(int i = 0; i < n; ++i) {
		if(i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}

	return sum;
}

int main() {
	int n = 1000;

	std::cout << sol(n) << '\n';

	return 0;
}

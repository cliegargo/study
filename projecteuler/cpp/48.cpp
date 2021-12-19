/*
 *
 * Self powers
 * Problem 48
 *
 * The series, 11 + 22 + 33 + ... + 1010 = 10405071317.
 * Find the last ten digits of the series, 11 + 22 + 33 + ... + 10001000.
 *
 * Answer:  9110846700
 * Completed on Thu, 18 Nov 2021, 04:07
 */


#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
#include <boost/math/special_functions/pow.hpp> 

boost::multiprecision::cpp_int sol(int n) {
	boost::multiprecision::cpp_int sum = 0;

	for(int i = 1; i < n + 1; ++i) {
		sum += boost::multiprecision::pow(boost::multiprecision::cpp_int(i), i);
	}
	
	std::string s_sum = boost::lexical_cast<std::string>(sum);
	s_sum = s_sum.substr((s_sum.size() - 10), s_sum.size());
	std::cout << s_sum << '\n';
	long long i;
	std::stringstream(s_sum) >> i;
	return i;
}

int main() {
	int n = 1000;
	
	std::cout << sol(n) << '\n';
	
	return 0;
}

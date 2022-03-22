// https://www.codewars.com/kata/555bfd6f9f9f52680f0000c5/train/cpp


#include <iostream>
#include <algorithm>
#include <sstream>

long long reverseNumber(long long n) {
    std::string s = std::to_string(n);
    std::reverse(s.begin(), s.end());

    long long r;
    std::istringstream(s) >> r;

    if(n > 0) {
        return r;
    } else {
        return ~(r - 1);
    }
}

int main() {
    long long n;

    std::cin >> n;
    std::cout << reverseNumber(n) << "\n";

    return 0;
}
// https://www.codewars.com/kata/59a8570b570190d313000037/train/cpp/61160e7f57abeb004a31eb5b


#include <iostream>
#include <vector>
#include <cmath>

unsigned int sum_cubes(unsigned int n) {
    std::vector<unsigned int> digits;

    for(unsigned int i = 1; i <= n; ++i) {
        digits.push_back(i);
    }

    unsigned int sum = 0;
    for(auto i : digits) {
        sum += pow(i, 3);
    }

    return sum;
}

int main() {
    unsigned int n;

    std::cin >> n;
    std::cout << sum_cubes(n) << "\n";

    return 0;
}
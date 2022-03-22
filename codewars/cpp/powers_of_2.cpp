// https://www.codewars.com/kata/57a083a57cb1f31db7000028/train/cpp


#include <iostream>
#include <vector>
#include <cmath>

std::vector<uint64_t> powers_of_two(int n) {
    std::vector<u_int64_t> powers;

    for(int i = 0; i < n + 1; ++i) {
        powers.push_back(pow(2, i));
    }

    return powers;
}

int main() {
    int n;

    std::cin >> n;
    std::vector<uint64_t> powers = powers_of_two(n);
    for(auto i : powers) {
        std::cout << i << ' ';
    }
    
    putchar('\n');

    return 0;
}
// https://www.codewars.com/kata/526571aae218b8ee490006f4/train/cpp


#include <iostream>
#include <bitset>

unsigned int countBits(unsigned long long n) {
    std::string bits = std::bitset<64>(n).to_string();

    unsigned long long sum = 0;
    for(int i = 0; i < bits.size(); ++i) {
        int j = bits[i] - '0';
        if(j == 1) {
            sum += j;
        }
    }

    return sum;
}

int main() {
    unsigned long long n;

    std::cin >> n;
    std::cout << countBits(n) << "\n";

    return 0;
}
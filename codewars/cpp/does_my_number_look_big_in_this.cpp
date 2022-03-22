// https://www.codewars.com/kata/5287e858c6b5a9678200083c/train/cpp


#include <iostream>
#include <cmath>

bool narcissistic(int value) {
    std::string str = std::to_string(value);
    unsigned long long int sum = 0;

    for(int i = 0; i < str.size(); ++i) {
        int n = str[i] - '0';
        sum += pow(n, str.size());
    }

    return (sum == value) ? true : false;
}

int main() {
    int value;

    std::cin >> value;
    std::cout << narcissistic(value) << "\n";

    return 0;
}
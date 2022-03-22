// https://www.codewars.com/kata/56b0f6243196b9d42d000034/train/cpp


#include <iostream>
#include <vector>

unsigned long long int factorial(unsigned long long int n) {
    unsigned long long int factorial = 1;

    for(int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    return factorial;
}

unsigned long long int sum_factorial(std::vector<int> vi) {
    unsigned long long int n;
    std::vector<unsigned long long int> vf;

    for(auto i : vi) {
        n = factorial(i);
        vf.push_back(n);
    }

    unsigned long long int sum = 0;

    for(auto i : vf) {
        sum += i;
    }
    
    return sum;
}

int main() {
    int l, n;

    std::cin >> l;

    std::vector<int> vi;
    
    for(int i = 0; i < l; ++i) {
        std::cin >> n;
        vi.push_back(n);
    }

    std::cout << sum_factorial(vi) << "\n";

    return 0;
}
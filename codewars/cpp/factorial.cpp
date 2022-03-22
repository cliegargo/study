// https://www.codewars.com/kata/57a049e253ba33ac5e000212/train/cpp


#include <iostream>

long long factorial(int n) {
    long long factorial = 1;

    for(int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    return factorial;
}

int main() {
    int n;

    std::cin >> n;
    std::cout << factorial(n) << std::endl;

    return 0;
}
// https://www.codewars.com/kata/55edaba99da3a9c84000003b/train/cpp


#include <iostream>
#include <vector>
#include <iterator>

std::vector<int> divisible_by(std::vector<int> numbers, int divisor) {
    std::vector<int> divisible;

    for(auto i : numbers) {
        if(i % divisor == 0) {
            divisible.push_back(i);
        }
    }

    return divisible;
}

int main() {
    int l, n, divisor;
    std::vector<int> numbers;
    std::cin >> l;
    for(int i = 0; i < l; ++i) {
        std::cin >> n;
        numbers.push_back(n);
    }
    std::cin >> divisor;

    std::vector<int> out = divisible_by(numbers, divisor);
    copy(out.begin(), out.end(), std::ostream_iterator<int>(std::cout, " "));

    return 0;
}
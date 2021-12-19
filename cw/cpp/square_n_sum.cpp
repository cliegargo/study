// https://www.codewars.com/kata/515e271a311df0350d00000f/train/cpp


#include <iostream>
#include <vector>
#include <cmath>

int square_sum(const std::vector<int>& numbers) {
    int sum = 0;

    for(auto i : numbers) {
        sum += pow(i, 2);
    }

    return sum;
}

int main() {
    int limit, values;
    std::vector<int> numbers;

    std::cin >> limit;
    for(int i = 0; i < limit; ++i) {
        std::cin >> values;
        numbers.push_back(values);
    }

    std::cout << square_sum(numbers) << std::endl;

    return 0;
}
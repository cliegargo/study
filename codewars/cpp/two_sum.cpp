// https://www.codewars.com/kata/52c31f8e6605bcc646000082/train/cpp


#include <iostream>
#include <vector>
#include <utility>

std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {
    std::vector<int> index;

    for(int i = 0; i < numbers.size(); ++i) {
        for(int j = 0; j < i; ++j) {
            if((numbers[i] + numbers[j]) == target) {
                index.push_back(j);
                index.push_back(i);
                break;
            }
        }
    }

    std::pair<std::size_t, std::size_t> sum;
    sum.first = index[0];
    sum.second = index[1];

    return sum;
}

int main() {
    int lim;

    std::cin >> lim;
    int vals;
    std::vector<int> numbers;
    for(int i = 0; i < lim; ++i) {
        std::cin >> vals;
        numbers.push_back(vals);
    }
    int target;
    std::cin >> target;

    std::pair<std::size_t, std::size_t> sum = two_sum(numbers, target);
    std::cout << sum.first << ", " << sum.second << "\n";

    return 0;
}
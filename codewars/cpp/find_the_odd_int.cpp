// https://www.codewars.com/kata/54da5a58ea159efa38000836/train/cpp


#include <iostream>
#include <vector>
#include <unordered_map>

int findOdd(const std::vector<int>& numbers) {
    std::unordered_map<int, int> counter;

    for(auto i : numbers) {
        counter[i] += 1;
    }

    int odd = 0;

    for(auto j : counter) {
        if(j.second % 2 != 0) {
            odd = j.first;
        }
    }

    return odd;
}

int main() {
    int lim, val;
    std::vector<int> numbers;
    std::cin >> lim;
    for(int i = 0; i < lim; ++i) {
        std::cin >> val;
        numbers.push_back(val);
    }

    std::cout << findOdd(numbers) << "\n";

    return 0;
}
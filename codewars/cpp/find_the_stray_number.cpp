// https://www.codewars.com/kata/57f609022f4d534f05000024/train/cpp


#include <iostream>
#include <vector>
#include <map>

int stray(std::vector<int> numbers) {
    std::map<int, int> counter;

    for(const auto i : numbers) {
        ++counter[i];
    }

    int sum = 0;

    for(const auto i : counter) {
        if(i.second == 1) {
            sum += i.first;
        }
    }

    return sum;
}

int main() {
    std::vector<int> numbers;
    int l, n;
    std::cin >> l;

    for(int i = 0; i < l; ++i) {
        std::cin >> n;
        numbers.push_back(n);
    }

    std::cout << stray(numbers) << '\n';

    return 0;
}
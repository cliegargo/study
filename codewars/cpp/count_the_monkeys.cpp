// https://www.codewars.com/kata/56f69d9f9400f508fb000ba7/train/cpp


#include <iostream>
#include <vector>
#include <iterator>

std::vector<int> MonkeyCount(int n) {
    std::vector<int> monkeys;

    for(int i = 1; i <= n; ++i) {
        monkeys.push_back(i);
    }

    return monkeys;
}

int main() {
    int n;

    std::cin >> n;
    std::vector<int> count = MonkeyCount(n);
    copy(count.begin(), count.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}
// https://www.codewars.com/kata/571d42206414b103dc0006a1/train/cpp


#include <iostream>
#include <vector>
#include <iterator>

std::vector<int> arr(int n = 0) {
    std::vector<int> filled;

    if(n >= 0) {
        for(int i = 0; i < n; ++i) {
            filled.push_back(i);
        }
    }

    return filled;
}

int main() {
    int n;

    std::cout << n;
    std::vector<int> fill = arr(n);
    copy(fill.begin(), fill.end(), std::ostream_iterator<int>(std::cout, ""));

    return 0;
}
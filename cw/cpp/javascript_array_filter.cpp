// https://www.codewars.com/kata/514a6336889283a3d2000001/train/cpp


#include <iostream>
#include <vector>
#include <iterator>

std::vector<int> get_even_numbers(const std::vector<int>& arr) {
    std::vector<int> even;

    for(auto i : arr) {
        if(i % 2 == 0) {
            even.push_back(i);
        }
    }

    return even;
}

int main() {
    int limit, values;
    std::vector<int> arr;
    
    std::cin >> limit;
    for(int i = 0; i < limit; ++i) {
        std::cin >> values;
        arr.push_back(values);
    }

    std::vector<int> even = get_even_numbers(arr);
    copy(even.begin(), even.end(), std::ostream_iterator<int>(std::cout, " "));

    return 0;
}
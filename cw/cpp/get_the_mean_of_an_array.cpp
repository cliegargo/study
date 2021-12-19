// https://www.codewars.com/kata/563e320cee5dddcf77000158/train/cpp


#include <iostream>
#include <vector>
#include <numeric>

int get_average(std::vector<int> marks) {
    return std::accumulate(marks.begin(), marks.end(), 0) / marks.size();
}

int main() {
    int lim, val;
    std::vector<int> marks;

    std::cin >> lim;
    for(int i = 0; i < lim; ++i) {
        std::cin >> val;
        marks.push_back(val);
    }

    std::cout << get_average(marks) << "\n";

    return 0;
}
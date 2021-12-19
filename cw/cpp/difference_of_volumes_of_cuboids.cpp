// https://www.codewars.com/kata/58cb43f4256836ed95000f97/train/cpp


#include <iostream>
#include <array>

int findDifference(std::array<int, 3> a, std::array<int, 3> b) {
    int a_sum = 1, b_sum = 1;

    for(unsigned long i = 0; i < a.size(); ++i) {
        a_sum *= a[i];
    }

    for(unsigned long i = 0; i < b.size(); ++i) {
        b_sum *= b[i];
    }

    return (a_sum > b_sum) ? a_sum - b_sum : b_sum - a_sum;
}

int main() {
    std::array<int, 3> a;
    int al, ah, aw;

    std::array<int, 3> b;
    int bl, bh, bw;


    int n;

    for(int i = 0; i < 3; ++i) {
        std::cin >> n;
        a[i] = n;
    }

    for(int i = 0; i < 3; ++i) {
        std::cin >> n;
        b[i] = n;
    }

    std::cout << findDifference(a, b) << "\n";



    return 0;
}
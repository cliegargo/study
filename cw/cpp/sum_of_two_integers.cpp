// https://www.codewars.com/kata/5a9c35e9ba1bb5c54a0001ac/train/cpp


#include <iostream>
#include <cmath>

int Add(int x, int y) {
    while(y != 0) {
        int carry = (x & y);
        x = x ^ y;
        y = carry << 1;
    }

    return x;
}

int main() {
    int x, y;

    std::cin >> x >> y;
    std::cout << Add(x, y) << std::endl;

    return 0;
}
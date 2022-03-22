// https://www.codewars.com/kata/541c8630095125aba6000c00/train/cpp


#include <iostream>
#include <cmath>

int digital_root(int n) {
    int d = 0;
    while(n != 0) {
        int r = n % 10;
        n /= 10;
        d += r;
    }

    int c = log10(d) + 1;

    if(d % 10 == 0) {
        return d / 10;
    } else if(c == 2){
        int dd = ((d / 10) + (d % 10));
        if(dd % 10 == 0) {
            return dd / 10;
        } else if(c == 2) {
            return ((dd / 10) + (dd % 10));
        } else {
            return dd;
        }
    } else {
        return d;
    }

    return 0;
}

int main() {
    int n;

    std::cin >> n;
    std::cout << digital_root(n) << std::endl;

    return 0;
}
// https://www.codewars.com/kata/580878d5d27b84b64c000b51/train/cpp


#include <iostream>
#include <vector>

int sumTriangularNumbers(int n) {
    int sum = 0, tri_num = 0, add = 0;

    if(n > 0) {
        for(int i = 0; i < n; ++i) {
            add += 1;
            tri_num += add;
            sum += tri_num;
        }
        return sum;
    } else {
        return 0;
    }
}

int main() {
    int n;

    std::cin >> n;
    std::cout << sumTriangularNumbers(n) << std::endl;

    return 0;
}
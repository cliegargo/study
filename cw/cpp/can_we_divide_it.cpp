// https://www.codewars.com/kata/5a2b703dc5e2845c0900005a/train/cpp


#include <iostream>

bool isDivideBy(int number, int a, int b) {
    if(number % a == 0 && number % b == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int number, a, b; 

    std::cin >> number >> a >> b;
    std::cout << isDivideBy(number, a, b) << std::endl;

    return 0;
}
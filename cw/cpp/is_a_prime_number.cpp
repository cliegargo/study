// https://www.codewars.com/kata/5262119038c0985a5b00029f/train/cpp


#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if(num > 1) {
        bool prime = true;
        for(int i = 2; i <= sqrt(num); ++i) {
            if(num % i == 0) {
                prime = false;
            }
        }
        if(prime == true) {
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }

    return 0;
}


int main() {
    int num;

    std::cin >> num;
    std::cout << isPrime(num) << std::endl;
    
    return 0;
}
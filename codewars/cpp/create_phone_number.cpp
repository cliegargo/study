// https://www.codewars.com/kata/525f50e3b73515a6db000b83/solutions/cpp


#include <iostream>

std::string createPhoneNumber(const int arr[10]) {
    std::string area_code, exchange_code, sub_number;

    for(int i = 0; i < 3; ++i) {
        area_code.push_back(arr[i] + '0');
    }

    for(int i = 3; i < 6; ++i) {
        exchange_code.push_back(arr[i] + '0');
    }

    for(int i = 6; i < 10; ++i) {
        sub_number.push_back(arr[i] + '0');
    }

    return "(" + area_code + ") " + exchange_code + "-" + sub_number;
}

int main() {
    int arr[10];

    for(int i = 0; i < 10; ++i) {
        std::cin >> arr[i];
    }

    std::cout << createPhoneNumber(arr) << std::endl;

    return 0;
}
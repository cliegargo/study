// https://www.codewars.com/kata/5861d28f124b35723e00005e/train/cpp

#include <iostream>

bool zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left) {
    if((distance_to_pump / fuel_left) > mpg) {
        return false;
    } else {
        return true;
    }

    return 0;
}

int main() {
    uint32_t distance_to_pump, mpg, fuel_left;

    std::cin >> distance_to_pump >> mpg >> fuel_left;
    std::cout << zero_fuel(distance_to_pump, mpg, fuel_left) << std::endl;

    return 0;
}
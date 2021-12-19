// https://www.codewars.com/kata/5a2fd38b55519ed98f0000ce/train/cpp


#include <iostream>

std::string multi_table(int number) {
    int times;
    std::string table;

    for(int i = 1; i < 11; ++i) {
        times = i * number;
        table += std::to_string(i) + " * " + std::to_string(number) +
                 " = " + std::to_string(times) + "\n";
    }

    return table.substr(0, table.size() - 1);
}

int main() {
    int number;

    std::cin >> number;
    std::cout << multi_table(number) << std::endl;

    return 0;
}
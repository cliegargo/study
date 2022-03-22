// https://www.codewars.com/kata/5601409514fc93442500010b/train/cpp


#include <iostream>
#include <vector>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
    int sum = 0;

    for(auto i : classPoints) {
        sum += i;
    }

    return (yourPoints > (sum / classPoints.size())) ? true : false;
}

int main() {
    int lim, val, yourPoints;
    std::vector<int> classPoints;
    std::cin >> lim;
    for(int i = 0; i < lim; ++i) {
        std::cin >> val;
        classPoints.push_back(val);
    }
    std::cin >> yourPoints;
    std::cout << betterThanAverage(classPoints, yourPoints) << "\n";

    return 0;
}
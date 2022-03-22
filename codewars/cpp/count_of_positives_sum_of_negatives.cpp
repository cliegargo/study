// https://www.codewars.com/kata/576bb71bbbcf0951d5000044/train/cpp


#include <iostream>
#include <vector>
#include <iterator>

std::vector<int> countPositivesSumNegatives(std::vector<int> input) {
    int positive = 0, negative = 0;

    for(auto i : input) {
        if(i > 0) {
            positive += 1;
        } else {
            negative += i;
        }
    }
    
    if(positive > 0 || negative > 0) {
        std::vector<int> output {positive, negative};
        return output;
    } else {
        std::vector<int> output;
        return output;
    }
}

int main() {
    int limit, values;
    std::vector<int> input;

    std::cin >> limit;

    for(int i = 0; i < limit; ++i) {
        std::cin >> values;
        input.push_back(values);
    }

    std::vector<int> counted = countPositivesSumNegatives(input);
    copy(counted.begin(), counted.end(), std::ostream_iterator<int>(std::cout," "));
    
    return 0;
}
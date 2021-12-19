// https://www.codewars.com/kata/5f000483f71133002359b897/train/cpp


#include <iostream>
#include <vector>
#include <regex>
#include <iterator>
#include <cmath>

std::vector<std::string> music(std::vector<int> numbers) {
    std::vector<std::string> roll;
    std::vector<std::string> lyrics = {
        "Never gonna give you up",
        "Never gonna let you down",
        "Never gonna run around and desert you",
        "Never gonna make you cry",
        "Never gonna say goodbye",
        "Never gonna tell a lie and hurt you"
    };

    for(auto i : numbers) {
        switch(i) {
            case 0: roll.push_back(lyrics[0]); break;
            case 1: roll.push_back(lyrics[1]); break;
            case 2: roll.push_back(lyrics[2]); break;
            case 3: roll.push_back(lyrics[3]); break;
            case 4: roll.push_back(lyrics[4]); break;
            case 5: roll.push_back(lyrics[5]); break;
        }
    }

    for(int i = 0; i <= roll.size(); ++i) {
        if(i % 2) {
            roll[i] = roll[i].substr(11, roll[i].size() - 1);
            roll[i] = roll[i].insert(0, std::string("NEVER GONNA"));
        }
    }

    return roll;
}

int main() {
    int limit, values;
    std::vector<int> numbers;

    std::cin >> limit;
    for(int i = 0; i < limit; ++i) {
        std::cin >> values;
        numbers.push_back(values);
    }

    std::vector<std::string> rick = music(numbers);
    copy(rick.begin(), rick.end(), std::ostream_iterator<std::string>(std::cout, "\n"));
}
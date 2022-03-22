// https://www.codewars.com/kata/5a6663e9fd56cb5ab800008b/train/cpp


#include <iostream>
#include <vector>
#include <iterator>

std::vector<int> humanYearsCatYearsDogYears(int humanYears) {
    int catYears = 0, dogYears = 0;

    if(humanYears == 1) {
        catYears = 15;
        dogYears = 15;
    } else if(humanYears == 2) {
        catYears = 15 + 9;
        dogYears = 15 + 9;
    } else {
        for(int i = 1; i <= 4; ++i) {
            catYears += (humanYears + 4);
        }
        for(int i = 1; i <= 5; ++i) {
            dogYears += (humanYears + 5);
        }
        dogYears -= 11;
    }
    
    std::vector<int> years {humanYears, catYears, dogYears};

    return years;
}

int main() {
    int humanYears;

    std::cin >> humanYears;
    std::vector<int> years = humanYearsCatYearsDogYears(humanYears);
    copy(years.begin(), years.end(), std::ostream_iterator<int>(std::cout, " "));

    return 0;
}
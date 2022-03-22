// https://www.codewars.com/kata/5a3fe3dde1ce0e8ed6000097/train/cpp


#include <iostream>
#include <sstream>

int centuryFromYear(int year) {
    int last = year % 100, century = 0;
    std::string convert, cut;
    
    if(last >= 1) {
        century = year - last + 100;
        convert = std::to_string(century);
        cut = convert.substr(0, convert.size()-2);
        std::stringstream(cut) >> century;
        return century;
    } else {
        century = year;
        convert = std::to_string(century);
        cut = convert.substr(0, convert.size()-2);
        std::stringstream(cut) >> century;
        return century;
    }
    return 0;
}

int main() {
    int year;

    std::cin >> year;
    std::cout << centuryFromYear(year) << std::endl;

    return 0;
}
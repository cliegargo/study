// https://www.codewars.com/kata/5583090cbe83f4fd8c000051/train/cpp


#include <iostream>
#include <vector>
#include <iterator>

std::vector<int> digitize(unsigned long n) {
    std::string s = std::to_string(n);
    
    std::vector<int> digits;
    for(int i = s.size() - 1; i >= 0; --i)  {
        int j = s[i] - '0';
        digits.push_back(j);
    }

    return digits;
}

int main() {
    unsigned long n;

    std::cin >> n;
    std::vector<int> out = digitize(n);
    copy(out.begin(), out.end(), std::ostream_iterator<int>(std::cout, " "));

    return 0;
}
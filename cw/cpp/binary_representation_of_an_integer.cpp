// https://www.codewars.com/kata/5a5f3034cadebf76db000023/train/cpp


#include <iostream>
#include <bitset>
#include <vector>
#include <iterator>

std::vector<int> showBits(int n) {
    std::string s = std::bitset<32>(n).to_string();
    std::vector<int> v;

    for(auto i : s) {
        v.push_back(int(i - '0'));
    }

    return v;
}

int main() {
    int n;

    std::cin >> n;
    std::vector<int> bits = showBits(n);
    copy(bits.begin(), bits.end(), std::ostream_iterator<int>(std::cout, ""));
}
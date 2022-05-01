// https://www.codewars.com/kata/52ea928a1ef5cfec800003ee/train/cpp


#include <iostream>
#include <cstdint>
#include <string>
#include <vector>
#include <cmath>

uint32_t ip_to_int32(const std::string& ip) {
    std::vector<uint32_t> digits;
    std::string tmp = "";

    for(auto& i: ip) {
        if(i != '.') {
            tmp += i;
        } else {
            digits.push_back(stoi(tmp));
            tmp = "";
        }
    }
    digits.push_back(stoi(tmp));

    uint32_t int32 = 0;
    int pos = digits.size() - 1;

    for(int i = 0; i < digits.size(); ++i) {
        int32 += digits[i] * pow(256, pos);
        --pos;
    }

    return int32;
}

int main() {
    std::string ip;

    std::cin >> ip;
    std::cout << ip_to_int32(ip) << '\n';

    return 0;
}
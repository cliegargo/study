// https://www.codewars.com/kata/525c7c5ab6aecef16e0001a5/train/cpp


#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

std::vector<std::string> sep_by_puncts(std::string number) {
    std::vector<std::string> nums;
    std::string tmp = "";
    for(auto n : number) {
        if(n != ' ' && n != '-') {
            tmp += n;
        } else {
            nums.push_back(tmp);
            tmp = "";
        }
    }
    nums.push_back(tmp);

    return nums;
}

long parse_int(std::string number) {
    std::map<std::string, long> expanded {
        {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4},
        {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9},
        {"ten", 10}, {"eleven", 11}, {"twelve", 12}, {"thirteen", 13},
        {"fourteen", 14}, {"fifteen", 15}, {"sixteen", 16}, {"seventeen", 17},
        {"eighteen", 18}, {"nineteen", 19}, {"twenty", 20}, {"thirty", 30},
        {"forty", 40}, {"fifty", 50}, {"sixty", 60}, {"seventy", 70},
        {"eighty", 80}, {"ninety", 90}, {"hundred", 100}, {"thousand", 1000},
        {"million", 1000000}
    };

    std::vector<std::string> nums = sep_by_puncts(number);

    long x = 0;
    long y = 0;
    std::vector<std::string>::iterator itr = std::find(nums.begin(), nums.end(), "thousand");
    if(itr != nums.end()) {
        unsigned int idx = std::distance(nums.begin(), itr);

        for(unsigned long j = 0; j <= idx; ++j) {
            auto it = expanded.find(nums[j]);
            if(it != expanded.end()) {
                if(it->first == "hundred") {
                    x *= it->second;
                } else if(it->first == "thousand") {
                    x *= it->second;
                } else if(it->first == "million") {
                    x *= it->second;
                } else {
                    x += (it->second);
                }
            }
        }

        for(unsigned long k = idx + 1; k <= nums.size() - 1; ++k) {
            auto it = expanded.find(nums[k]);
            if(it != expanded.end()) {
                if(it->first == "hundred") {
                    y *= it->second;
                } else {
                    y += it->second;
                }
            }
        }
    } else {
        for(auto n : nums) {
            auto it = expanded.find(n);
            if(it != expanded.end()) {
                if(it->first == "million") {
                    y *= it->second;
                } else if(it->first == "hundred") {
                    y *= it->second;
                } else {
                    y += it->second;
                }
            }
        }
    }

    return x + y;
}

int main() {
    std::string number;

    getline(std::cin, number);
    std::cout << parse_int(number) << "\n";

    return 0;
}
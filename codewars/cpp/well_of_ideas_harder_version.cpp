#include <iostream>
#include <vector>
#include <algorithm>

std::string well(const std::vector<std::vector<std::string>>& arr) {
    int good = 0;
    for(auto i : arr) {
        std::transform(i.begin(), i.end(), i.begin(), ::toupper);
        if(i == "GOOD") {
            good += 1;
        }
    }

    switch(good) {
        case 0: return "Fail!"; break;
        case 1 ... 2: return "Publish!"; break;
        default: return "I smell a series!"; break;
    }
}

int main() {
    std::vector<std::string> arr = {"bad", "bAd", "bad"};
    std::cout << well(arr) << '\n';
    return 0;
}
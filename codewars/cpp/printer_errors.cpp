// https://www.codewars.com/kata/56541980fa08ab47a0000040/train/cpp


#include <iostream>
#include <vector>
#include <regex>

class Printer {
public:
    static std::string printerError(const std::string& s) {
        std::vector<char> a_to_m = {
            'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'
        };

        int counter = 0;
        for(auto c : s) {
            if(std::find(a_to_m.begin(), a_to_m.end(), c) != a_to_m.end()) {
                counter += 1;
            }
        }

        int err = s.size() - counter;
        return std::to_string(err) + "/" + std::to_string(s.size());
    }
};

int main() {
    std::string s;

    std::cin >> s;
    Printer pe;
    std::cout << pe.printerError(s) << "\n";

    return 0;
}
// https://www.codewars.com/kata/5274e122fc75c0943d000148/train/cpp


#include <iostream>

std::string group_by_commas(int n) {
    std::string m = std::to_string(n);

    for(int i = m.size(); i > 0; i -= 3) {
        m.insert(0 + i, ",");
    }

    return m.substr(0, m.size() - 1);
}

int main() {
    int n;
    
    std::cin >> n;
    std::cout << group_by_commas(n) << "\n";
    
    return 0;
}

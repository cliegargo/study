#include <iostream>

std::string boolToString(bool flag) {
    switch(flag) {
        case true:
            return "true";
            break;
        case false:
            return "false";
            break;
    }
}

int main() {
    bool flag;
    std::cin >> flag;
    std::cout << boolToString(flag) << std::endl;

    return 0;
}
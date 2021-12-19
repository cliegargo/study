// https://www.codewars.com/kata/580a094553bd9ec5d800007d/train/cpp


#include <iostream>

std::string apple(int x) {
    if((x * x) > 1000) {
        return "It's hotter than the sun!!";
    } else {
        return "Help yourself to a honeycomb Yorkie for the glovebox.";
    }
}

int main() {
    int x;

    std::cin >> x;
    std::cout << apple(x) << "\n";

    return 0;
}
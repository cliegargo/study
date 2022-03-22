// https://www.codewars.com/kata/5bbd279c8f8bbd5ee500000f/train/cpp
// https://stackoverflow.com/questions/1894886/parsing-a-comma-delimited-stdstring


#include <iostream>
#include <sstream>
#include <vector>

std::string find_screen_size(int width, const std::string &ratio) {
    std::vector<int> resolution;
    std::stringstream ss(ratio);

    for(int i = 0; ss >> i;) {
        resolution.push_back(i);
        if(ss.peek() == ':') {
            ss.ignore();
        }
    }

    std::cout << resolution[0] << ":" << resolution[1] << std::endl;

    int height = width * resolution[1] / resolution[0];
    return std::to_string(width) + "x" + std::to_string(height);
}

int main() {
    int width;
    std::string ratio;

    std::cin >> width >> ratio;
    std::cout << find_screen_size(width, ratio) << std::endl;

    return 0;
}
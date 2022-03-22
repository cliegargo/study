// https://www.codewars.com/kata/55a2d7ebe362935a210000b2/train/cpp


#include <iostream>
#include <vector>

int findSmallest(std::vector<int> list) {
    for(unsigned long i = 0; i < list.size(); ++i) {
        if(list[0] > list[i]) {
            list[0] = list[i];
        }
    }

    return list[0];
}

int main() {
    std::vector<int> list;
    int l, n;
    std::cin >> l;
    for(int i = 0; i < l; ++i) {
        std::cin >> n;
        list.push_back(n);
    }
    std::cout << findSmallest(list) << "\n";

    return 0;
}
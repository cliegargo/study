// https://www.codewars.com/kata/5f70c883e10f9e0001c89673/train/cpp


#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

/*
R
4
3 2 1 2


L
5
1 4 5 3 5
*/

std::vector<int> flip(const char dir, const std::vector<int>& arr) {
    std::vector<int> flipped = arr;

    if(dir == 'R') {
        std::reverse(flipped.begin(), flipped.end());
        std::sort(flipped.begin(), flipped.end());
    } else {
        std::sort(flipped.begin(), flipped.end());
        std::reverse(flipped.begin(), flipped.end());
    }

    return flipped;
}

int main() {
    char dir;
    std::cin >> dir;

    int l, v;
    std::vector<int> arr;
    std::cin >> l;
    for(int i = 0; i < l; ++i) {
        std::cin >> v;
        arr.push_back(v);
    }

    std::vector<int> f = flip(dir, arr);
    copy(f.begin(), f.end(), std::ostream_iterator<int>(std::cout, " "));

    return 0;
}
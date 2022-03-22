#include <iostream>
#include <vector>

std::vector<std::vector<int>> create_spiral(int n) {
    std::vector<std::vector<int>> spiral;

    for(int i = 1; i < (n * n + 1); ++i) {
        std::cout << i << '\n';
    }

    return {};
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::vector<int>> out = create_spiral(n);
    for(auto &i : out) for(auto &j : i) std::cout << j << '\n';
    return 0;
}
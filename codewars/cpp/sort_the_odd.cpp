#include <iostream>
#include <vector>

class Kata {
    public:
        std::vector<int> sortArray(std::vector<int> array) {
            std::vector<int> sorted;
            int swapped = false;

            for(int i = 0; i < array.size() - 1; ++i) {
                for(int j = 0; j < array.size() - 1; ++j) {
                    if(array[j] % 2 != 0 && array[j + 1] % 2 != 0) {
                        if(array[j] > array[j + 1]) {
                            int temp = array[j];
                            array[j] = array[j + 1];
                            sorted.push_back(array[j]);
                            swapped = true;
                        }
                    } else {
                        sorted.push_back(array[j]);
                    }
                }

                if(swapped == true) {
                    break;
                }
            }

            return sorted;
        }
};

int main() {
    //std::vector<int> array = {7, 1};
    //std::vector<int> array = {5, 3, 2, 8, 1, 4};
    std::vector<int> array = {5, 8, 6, 3, 4};

    Kata kata;
    std::vector<int> out = kata.sortArray(array);
    for(auto &i : out) {
        std::cout << i << '\n';
    }

    return 0;
}
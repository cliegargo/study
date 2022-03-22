// https://www.codewars.com/kata/54edbc7200b811e956000556/train/cpp


#include <iostream>
#include <vector>
#include <map>

int count_sheep(std::vector<bool> arr) {
    std::map<bool, int> counter;
    for(int i = 0; i < arr.size(); ++i) {
        counter[arr[i]] += 1;
    }

    int sheep = 0;
    for(auto i : counter) {
        std::cout << i.first << ":" << i.second << "\n";
        if(i.first == true) {
            sheep = i.second;
        }
    }

    return sheep;
}


int main() {
    int lim;
    std::cin >> lim;
    bool val;
    std::vector<bool> arr;
    for(int i = 0; i < lim; ++i) {
        std::cin >> val;
        arr.push_back(val);
    }

    std::cout << count_sheep(arr) << "\n";

    return 0;
    
}
// https://www.codewars.com/kata/56f1c6034d0c330e4a001059/train/cpp


#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

class GenerateColorRGB {
    public: static string generateColor(int randomNumber) {
        srand(randomNumber);
        string colour;
        vector<char> hex {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
            'A', 'B', 'C', 'D', 'E', 'F', 'a', 'b', 'c', 'd', 'e', 'f'};

        for(int i = 0; i < 6; ++i) {
            colour += hex[rand() % hex.size()];
        }

        return "#" + colour;
    }
};


int main() {
    int randomNumber;

    cin >> randomNumber;
    GenerateColorRGB generate;
    cout << generate.generateColor(randomNumber) << endl;

    return 0;
}
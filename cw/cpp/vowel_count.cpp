// https://www.codewars.com/kata/54ff3102c1bad923760001f3/train/cpp

#include <iostream>
using namespace std;

int getCount(const string& inputStr) {
    int num_vowels = 0;

    for(int i = 0; i < inputStr.size(); ++i) {
        if(inputStr[i] == 'a') {
            num_vowels += 1;
        } else if(inputStr[i] == 'e') {
            num_vowels += 1;
        } else if(inputStr[i] == 'i') {
            num_vowels += 1;
        } else if(inputStr[i] == 'o') {
            num_vowels += 1;
        } else if(inputStr[i] == 'u') {
            num_vowels += 1;
        }
    }

    return num_vowels;
}

int main() {
    string inputStr;

    cin >> inputStr;
    cout << getCount(inputStr) << endl;

    return 0;
}
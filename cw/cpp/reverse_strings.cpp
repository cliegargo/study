// https://www.codewars.com/kata/5168bb5dfe9a00b126000018/train/cpp


#include <iostream>
using namespace std;

string reverseString(string str) {
    string reverse = "";

    for(int i = str.size() - 1; i >= 0; --i) {
        reverse.push_back(str[i]);
    }

    return reverse;
}

int main() {
    string str;

    cin >> str;
    cout << reverseString(str) << std::endl;

    return 0;
}
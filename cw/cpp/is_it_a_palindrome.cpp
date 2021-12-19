// https://www.codewars.com/kata/57a1fd2ce298a731b20006a4/train/cpp


#include <iostream>
#include <vector>
#include <algorithm>

bool isPalindrom(const std::string& str) {
    std::string ss = str;
    std::transform(ss.begin(), ss.end(), ss.begin(), ::toupper);

    std::vector<char> vv;
    for(int i = 0; i < str.size(); ++i) {
        vv.push_back(str[i]);
    }
    std::reverse(vv.begin(), vv.end());
    std::transform(vv.begin(), vv.end(), vv.begin(), ::toupper);

    int count = 0;
    for(int i = 0; i < ss.size(); ++i) {
        if(vv[i] == ss[i]) {
            count += 1;
        }
    }

    return (count == str.size()) ? true : false;
}

int main() {
    std::string str;

    std::cin >> str;
    std::cout << isPalindrom(str) << "\n";

    return 0;
}
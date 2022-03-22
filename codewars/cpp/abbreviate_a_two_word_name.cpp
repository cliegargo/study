// https://www.codewars.com/kata/57eadb7ecd143f4c9c0000a3/train/cpp


#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>

std::string abbrevName(std::string name) {
    std::transform(name.begin(), name.end(), name.begin(), ::toupper);

    std::vector<std::string> fullname;
    std::istringstream ss(name);

    for(std::string s; ss >> s;) {
        fullname.push_back(s);
    }

    std::string f = fullname[0], l = fullname[1];
    f = f.substr(0, f.size() - (f.size() - 1));
    l = l.substr(0, l.size() - (l.size() - 1));

    return f + "." + l;
}

int main() {
    std::string name;

    getline(std::cin, name);
    std::cout << abbrevName(name) << std::endl;

    return 0;
}
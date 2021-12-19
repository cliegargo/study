// https://www.codewars.com/kata/592a6ad46d6c5a62b600003f/train/cpp


#include <iostream>
#include <vector>
#include <map>

std::string encode(const std::string& str) {
    std::map<char, char> cipher = {
        {'G', 'A'}, {'g', 'a'}, {'a', 'g'}, {'A', 'G'}, {'D', 'E'}, {'d', 'e'},
        {'E', 'D'}, {'e', 'd'}, {'R', 'Y'}, {'r', 'y'}, {'Y', 'R'}, {'y', 'r'},
        {'P', 'O'}, {'p', 'o'}, {'O', 'P'}, {'o', 'p'}, {'L', 'U'}, {'l', 'u'},
        {'U', 'L'}, {'u', 'l'}, {'K', 'I'}, {'k', 'i'}, {'I', 'K'}, {'i', 'k'}
    };

    std::string encoded;

    for(const auto c : str) {
        auto it = cipher.find(c);
        if(it != cipher.end()) {
            encoded += it->second;
        } else {
            encoded += c;
        }
    }

    return encoded;
}

std::string decode(const std::string& str) {
    std::map<char, char> cipher = {
        {'G', 'A'}, {'g', 'a'}, {'a', 'g'}, {'A', 'G'}, {'D', 'E'}, {'d', 'e'},
        {'E', 'D'}, {'e', 'd'}, {'R', 'Y'}, {'r', 'y'}, {'Y', 'R'}, {'y', 'r'},
        {'P', 'O'}, {'p', 'o'}, {'O', 'P'}, {'o', 'p'}, {'L', 'U'}, {'l', 'u'},
        {'U', 'L'}, {'u', 'l'}, {'K', 'I'}, {'k', 'i'}, {'I', 'K'}, {'i', 'k'}
    };

    std::string decoded;
    for(const auto c : str) {
        auto it = cipher.find(c);
        if(it != cipher.end()) {
            decoded += it->second;
        } else {
            decoded += c;
        }
    }

    return decoded;
}

int main() {
    std::cout << "Input: ";
    std::string str;

    getline(std::cin, str);
    std::cout << "Encode: " << encode(str) << '\n';
    std::cout << "Decode: " << decode(encode(str)) << '\n';

    return 0;
}
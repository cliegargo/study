// https://www.codewars.com/kata/530e15517bc88ac656000716/train/cpp


#include <iostream>
#include <map>

std::string rot13(std::string msg) {
    std::map<char, int> alphabet = {
        {'A', 65}, {'B', 66}, {'C', 67}, {'D', 68}, {'E', 69}, {'F', 70},
        {'G', 71}, {'H', 72}, {'I', 73}, {'J', 74}, {'K', 75}, {'L', 76},
        {'M', 77}, {'N', 78}, {'O', 79}, {'P', 80}, {'Q', 81}, {'R', 82},
        {'S', 83}, {'T', 84}, {'U', 85}, {'V', 86}, {'W', 87}, {'X', 88},
        {'Y', 89}, {'Z', 90}, {'a', 97}, {'b', 98}, {'c', 99}, {'d', 100},
        {'e', 101}, {'f', 102}, {'g', 103}, {'h', 104}, {'i', 105}, {'j', 106},
        {'k', 107}, {'l', 108}, {'m', 109}, {'n', 110}, {'o', 111}, {'p', 112},
        {'q', 113}, {'r', 114}, {'s', 115}, {'t', 116}, {'u', 117}, {'v', 118},
        {'w', 119}, {'x', 120}, {'y', 121}, {'z', 122},
    };

    std::string cipher;

    for(size_t i = 0; i < msg.size(); ++i) {
        auto it = alphabet.find(msg[i]);
        if(it != alphabet.end()) {
            int ascii = msg[i] + 13;
            if(isupper(msg[i])) {
                if(ascii > 90) {
                    cipher += char(ascii - 26);
                } else {
                    cipher += char(ascii);
                }
            } else {
                if(ascii > 122) {
                    cipher += char(ascii - 26);
                } else {
                    cipher += char(ascii);
                }
            }
        } else {
            cipher += msg[i];
        }
    }

    return cipher;
}

int main() {
    std::string msg;

    getline(std::cin, msg);
    std::cout << rot13(msg) << "\n";

    return 0;
}
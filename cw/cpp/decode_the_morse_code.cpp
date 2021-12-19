// https://www.codewars.com/kata/54b724efac3d5402db00065e/train/cpp


#include <iostream>
#include <map>
#include <vector>
#include <regex>

std::string decodeMorse(std::string morseCode) {
    std::map<std::string, std::string> MORSE_CODE {
        {"-", "T"}, {"--", "M"}, {"---", "O"}, {"-----", "0"}, {"----.", "9"},
        {"---..", "8"}, {"---...", ","}, {"--.", "G"}, {"--.-", "Q"},
        {"--..", "Z"}, {"--..--", ","}, {"--...", "7"}, {"-.", "N"},
        {"-.-", "K"}, {"-.--", "Y"}, {"-.--.", "("}, {"-.--.-", ")"},
        {"-.-.", "C"}, {"-.-.--", "!"}, {"-.-.-.", ";"}, {"-..", "D"},
        {"-..-", "X"}, {"-..-.", "/"}, {"-...", "B"}, {"-...-", "="},
        {"-....", "6"}, {"-....-", "-"}, {".", "E"}, {".-", "A"}, {".--", "W"},
        {".---", "J"}, {".----", "1"}, {".----.", "'"}, {".--.", "P"},
        {".--.-.", "@"}, {".-.", "R"}, {".-.-.", "+"}, {".-.-.-", "."},
        {".-..", "L"}, {".-..-.", "\""}, {".-...", "&"}, {"..", "I"},
        {"..-", "U"}, {"..---", "2"}, {"..--.-", "_"}, {"..--..", "?"},
        {"..-.", "F"}, {"...", "S"}, {"...-", "V"}, {"...--", "3"},
        {"...---...", "SOS"}, {"...-..-", "$"},{"....", "H"}, {"....-", "4"},
        {".....", "5"}
    };

    std::vector<std::string> morse;
    std::string tmp = "";

    for(auto c : morseCode) {
        if(c != ' ') {
            tmp += c;
        } else {
            morse.push_back(tmp);
            tmp = "";
        }
    }
    morse.push_back(tmp);

    std::string decode;
    for(auto c : morse) {
        auto it = MORSE_CODE.find(c);
        if(it != MORSE_CODE.end()) {
            decode += it->second;
        } else {
            decode += " ";
        }
    }

    decode = std::regex_replace(decode, std::regex("[\\s]+"), " ");
    decode = std::regex_replace(decode, std::regex("^[\\s]*|[\\s]$"), "");

    return decode;
}

int main() {
    std::string morseCode;

    getline(std::cin, morseCode);
    std::cout << decodeMorse(morseCode) << "\n";

    return 0;
}
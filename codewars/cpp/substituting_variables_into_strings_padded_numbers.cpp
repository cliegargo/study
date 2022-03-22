// https://www.codewars.com/kata/51c89385ee245d7ddf000001/train/cpp


#include <iostream>

std::string solution(int n) {
    std::string s = std::to_string(n);

    switch(s.length()) {
        case 1: return "Value is 0000" + s; break;
        case 2: return "Value is 000" + s; break;
        case 3: return "Value is 00" + s; break;
        case 4: return "Value is 0" + s; break;
        case 5: return "Value is " + s; break;
    }

    return 0;
}

int main() {
    int n;
    
    std::cin >> n;
    std::cout << solution(n) << std::endl;
    
    return 0;
}

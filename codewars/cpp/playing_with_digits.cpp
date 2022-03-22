// https://www.codewars.com/kata/5552101f47fc5178b1000050/train/cpp


#include <iostream>
#include <cmath>
#include <sstream>

/*
FIXED TEST:
89 1
92 1
46288 3
114 3
*/

class DigPow {
public:
    static int digPow(int n, int p) {
        std::string s = std::to_string(n);
        int sum = 0;

        for(int i = 0; i < s.size(); ++i) {
            int m = s[i] - '0';
            sum += pow(m, p);
            p += 1;
        }

        int k = 0;
        for(int j = 1; j < 1000000; ++j) {
            if((sum / j) == n) {
                k = j;
            }
        }

        return (k > 0) ? k : -1;
    }
};

int main() {
    int n, p;

    std::cin >> n >> p;
    DigPow dp;
    std::cout << dp.digPow(n, p) << "\n";

    return 0;
}
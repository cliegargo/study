// https://www.codewars.com/kata/513e08acc600c94f01000001/solutions/cpp


#include <iostream>
#include <cmath>

class RGBToHex {
    public: static char convert(double x) {
            if(x == 0 || x < 0.99) {
                return '0';
            } else if(x == 1 || x < 1.99) {
                return '1';
            } else if(x == 2 || x < 2.99) {
                return '2';
            } else if(x == 3 || x < 3.99) {
                return '3';
            } else if(x == 4 || x < 4.99) {
                return '4';
            } else if(x == 5 || x < 5.99) {
                return '5';
            } else if(x == 6 || x < 6.99) {
                return '6';
            } else if(x == 7 || x < 7.99) {
                return '7';
            } else if(x == 8 || x < 8.99) {
                return '8';
            } else if(x == 9 || x < 9.99) {
                return '9';
            } else if(x == 10 || x < 10.99) {
                return 'A';
            } else if(x == 11 || x < 11.99) {
                return 'B';
            } else if(x == 12 || x < 12.99) {
                return 'C';
            } else if( x == 13 || x < 13.99) {
                return 'D';
            } else if(x == 14 || x < 14.99) {
                return 'E';
            } else {
                return 'F';
            }
            return 0;
        }

    public: static std::string rgb(int r, int g, int b) {
        std::string red1, red2, green1, green2, blue1, blue2;
        std::string red, green, blue;
        double r_fn, r_rm, g_fn, g_rm, b_fn, b_rm;

        if (r > 255) {
            red = "FF";
        } else if(r <= 255) {
            r_fn = r / 16.0;
            red1 = convert(r_fn);
            r_rm = fmod(r, 16.0);
            red2 = convert(r_rm);
            red = red1 + red2;
        }

        if (g > 255) {
            green = "FF";
        } else if(g <= 255) {
            g_fn = g / 16.0;
            green1 = convert(g_fn);
            g_rm = fmod(g, 16.0);
            green2 = convert(g_rm);
            green = green1 + green2;
        }

        if (b > 255) {
            blue = "FF";
        } else if(b <= 255) {
            b_fn = b / 16.0;
            blue1 = convert(b_fn);
            b_rm = fmod(b, 16.0);
            blue2 = convert(b_rm);
            blue = blue1 + blue2;
        }

        return red + green + blue;
    }
};

int main() {
    int r, g, b;

    std::cin >> r >> g >> b;
    
    RGBToHex rgb_hex;
    std::cout << rgb_hex.rgb(r, g, b) << std::endl;

    return 0;
}
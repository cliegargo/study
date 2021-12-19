// Sum square difference

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a = 0;
    int b, bb = 0;
    int ab;

    // The sum of the squares of the 100 natural numbers is:
    // 1^2 + 2^2 + 3^2...
    for (int i = 0; i <= 100; i++) {
        a = a + pow(i, 2);
    }

    // The square of the sum of the 100 natural numbers:
    // (1 + 2 + 3...)^2
    for (int i = 0; i <= 100; i++) {
        bb = bb + i;
        b = (pow(bb, 2));
    }

    ab = (b - a);
    cout << ab << endl;
}

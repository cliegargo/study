// Multiples of 3 and 5

#include <iostream>
using namespace std;

int main() {
    int i, sum = 0;

    for (i = 0; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum = sum + i;
        }
    }

    cout << sum << endl;
}

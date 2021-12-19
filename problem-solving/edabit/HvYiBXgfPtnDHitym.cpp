#include <iostream>
using namespace std;

int triArea(int base, int height) {
    return (0.5 * (base * height));
}

int main() {
    int base, height;
    cin >> base >> height;
    cout << triArea(base, height) << endl;

    return 0;
}
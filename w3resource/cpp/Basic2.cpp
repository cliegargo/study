// Write a program in C++ to print the sum of two numbers.

#include <iostream>
using namespace std;

int add(int X, int Y) {
    return (X + Y);
}

int main() {
    int X, Y;

    cin >> X >> Y;

    int output = add(X, Y);
    cout << output << endl;

    return 0;
}

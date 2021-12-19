// Write a program in C++ to find the size of fundamental data types.

#include <iostream>
using namespace std;

int main() {
    cout << "char: " << sizeof(char) << endl;   // char
    cout << "short: " << sizeof(short) << endl;   // short
    cout << "int: " << sizeof(int) << endl;   // int
    cout << "long: " << sizeof(long) << endl;   // long
    cout << "long long: " << sizeof(long long) << endl;   // long long
    cout << "float: " << sizeof(float) << endl;   // float
    cout << "double: " << sizeof(double) << endl;   // double
    cout << "long double: " << sizeof(long double) << endl;   // long double
    cout << "boolean: " << sizeof(bool) << endl;   // bool
    cout << "string: " << sizeof(string) << endl;   // string

    return 0;
}

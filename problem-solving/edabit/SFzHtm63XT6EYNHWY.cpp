#include <iostream>
using namespace std;

int addition(int a, int b) {
    return (a + b);
}

int main() {
    int sum = addition(-3, -6);
    cout << sum << endl;

    return 0;
}
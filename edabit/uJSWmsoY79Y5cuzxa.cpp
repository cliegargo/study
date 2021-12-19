#include <iostream>
using namespace std;


int squared(int a) {
    return (a * a);
}

int main() {
    int a;
    cin >> a;
    cout << squared(a) << endl;

    return 0;
}
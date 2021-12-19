// ReLU


#include <iostream>
using namespace std;

int solveReLU(int x) {
    if(x >= 0) {
        return x;
    } else if (x < 0) {
        return 0;
    }
}

int main() {
    int x;

    cin >> x;

    int ReLU = solveReLU(x);
    cout << ReLU << endl;

    return 0;
}

// Dodecagon


#include <iostream>
#include <cmath>
using namespace std;

int solve(int r) {
    int a = (3 * (pow(r, 2)));

    return a;
}

int main() {
    int r;

    cin >> r;

    int answer = solve(r);
    cout << answer;

    return 0;
}

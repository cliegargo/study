// Rounding


#include <iostream>
using namespace std;

int solve(int X, int A) {
    if (X >= A)
        return 10;
    else
        return 0;
}

int main() {
    int X, A;

    cin >> X >> A;

    int answer = solve(X, A);
    cout << answer;

    return 0;
}

// Determinant


#include <iostream>
using namespace std;

int solve(int A, int B, int C, int D) {
    int AD = (A * D);
    int BC = (B * C);

    return (AD - BC);
}

int main() {
    int A, B, C, D;

    cin >> A >> B >> C >> D;

    int output = solve(A, B, C, D);
    cout << output << endl;

    return 0;
}

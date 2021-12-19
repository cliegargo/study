// Favourite Sound


#include <iostream>
using namespace std;

int solve(int A, int B, int C) {
    if (B >= A * C)
        return C;
    else
        return (B / A);
}

int main() {
    int A, B, C;

    cin >> A >> B >> C;

    int answer = solve(A, B, C);
    cout << answer;

    return 0;
}

// Ferris Wheel


#include <iostream>
using namespace std;

int solve(int A, int B) {
    if (A >= 13)
        return B;
    else if (A >= 6)
        return B/2;
    else
        return 0;
}

int main() {
    int A, B;

    cin >> A >> B;

    int answer = solve(A, B);
    cout << answer;

    return 0;
}

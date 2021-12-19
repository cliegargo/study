// T or T


#include <iostream>
using namespace std;

int solve(int N, int A, int B) {
    if (B < (N * A))
        return B;
    else
        return N * A;
}

int main() {
    int N, A, B;

    cin >> N >> A >> B;

    int answer = solve(N, A, B);
    cout << answer;

    return 0;
}

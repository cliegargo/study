// box


#include <iostream>
using namespace std;

int calculate(int N, int A, int B) {
    int solve = ((N - A) + B);

    return solve;
}

int main() {
    int N, A, B;

    cin >> N >> A >> B;

    int output = calculate(N, A, B);
    cout << output;

    return 0;
}

// Brick


#include <iostream>
using namespace std;

int solve(int N, int W) {
    return (N / W);
}

int main() {
    int N, W;

    cin >> N >> W;

    int ans = solve(N, W);
    cout << ans << endl;

    return 0;
}

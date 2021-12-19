// Biochrome Cells


#include <iostream>
using namespace std;

int main() {
    int N, A;

    cin >> N >> A;
    int square_grid =N * N;
    int painted = (square_grid - A);

    cout << painted;

    return 0;
}

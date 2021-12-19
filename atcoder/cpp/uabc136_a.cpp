// Transfer

#include <iostream>
using namespace std;

int main() {
    /* Bottle 1 can hold up to 'A' ml of water,
     * and now it contains 'B' ml of water.
     * Bottle 2 contains 'C' ml of water.
     * Bottle 1: A = 6; B = 4
     * Bottle 2: C = 3
     * Output = 1
     */
    int bottle1, A, B;
    int bottle2, C;

    cin >> A >> B >> C;

    // Before
    cout << "Bottle 1: " << A << " "<< B << endl;
    cout << "Bottle 2: " << C << endl;

    // After
    while (B != A) {
        for (int i = 0; i < A; i++) {
            cout << (A + i);
            if (B == A)
                break;
        }
    }





    // Output
    // cout << bottle2 << endl;

    return 0;
}

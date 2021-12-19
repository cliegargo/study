// Libra


#include <iostream>
using namespace std;

int main() {
    int L, R, A, B, C ,D;

    cin >> A >> B >> C >> D;
    R = (C + D);
    L = (A + B);

    if (R == L)
        cout << "Balanced" << endl;
    else if (R > L)
        cout << "Right" << endl;
    else if (L > R)
        cout << "Left" << left;

    return 0;
}

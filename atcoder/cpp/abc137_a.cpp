// - + - x

#include <iostream>
using namespace std;

int main() {
    int A, B, max, add ,sub, mult;

    cin >> A >> B;

    add = (A + B);
    sub = (A - B);
    mult = (A * B);

    max = (add > sub) ? ((add > mult) ? add : mult) : ((sub > mult) ? sub : mult);

    cout << max << endl;

    return 0;
}

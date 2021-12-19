// Add Sub Mul


#include <iostream>
using namespace std;

int main() {
    int A, B, add, sub, mul;

    cin >> A >> B;

    add = (A + B);
    sub = (A - B);
    mul = (A * B);

    if (add > sub && add > mul) {
        cout << add << endl;
    } else if (sub > add && sub > mul) {
        cout << sub << endl;
    } else if (mul > add && mul > sub) {
        cout << mul << endl;
    } else if (add == sub || add == mul || sub == add || sub == mul || mul == add || mul == sub) {
        cout << add << endl;
    }

    return 0;
}

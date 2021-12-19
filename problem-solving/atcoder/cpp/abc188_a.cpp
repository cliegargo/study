// Three-Point Shot

#include <iostream>
using namespace std;

int main() {
    int X, Y;

    cin >> X >> Y;

    int XX = (X + 3);
    int YY = (Y + 3);

    // X is greater than Y
    if (X > Y)
        if (YY > X)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    // Y is greater than X
    else if (Y > X)
        if (XX > Y)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

    return 0;
}

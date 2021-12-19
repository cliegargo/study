// Five Variables


#include <iostream>
using namespace std;

int solve(int x1, int x2, int x3, int x4, int x5) {
    if (x1 == 0)
        return 1;
    else if (x2 == 0)
        return 2;
    else if (x3 == 0)
        return 3;
    else if (x4 == 0)
        return 4;
    else if (x5 == 0)
        return 5;

    return 0;
}

int main() {
    int x1, x2, x3, x4, x5;

    cin >> x1 >> x2 >> x3 >> x4 >> x5;
    int result = solve(x1, x2, x3, x4, x5);
    cout << result << endl;

    return 0;
}

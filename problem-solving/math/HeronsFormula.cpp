// Heron's Formula

#include <iostream>
#include <math.h>
using namespace std;

double getTriangleArea(int x, int y, int z) {
    /*
    s = semiperimeter
    a = area
    */
    double s, a;

    s = ((x + y + z) / 2);
    a = (sqrt(s * (s - x) * (s - y) * (s - z)));

    return a ;
}

int main() {
    /*
    x = side 1
    y = side 2
    z = side 3
    */
    int x, y, z;

    cin >> x >> y >> z;

    double output = getTriangleArea(x, y, z);
    cout << output << endl;

    return 0;
}

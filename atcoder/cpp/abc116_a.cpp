// Right triangle


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int AB, BC, CA;

    cin >> AB >> BC >> CA;

    int p = ((AB + BC + CA) / 2);

    int a = (sqrt(p * (p - AB) * (p - BC) * (p - CA)));

    cout << a << endl;

    return 0;
}

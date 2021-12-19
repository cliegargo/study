// Circle Pond


#include <iostream>
using namespace std;

#define PI 3.1415

double getCircumference(int R) {
    return (2 * PI * R);
}

int main() {
    double R;

    cin >> R;

    double circumference = getCircumference(R);
    cout << circumference << endl;

    return 0;
}

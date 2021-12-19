// Double Helix


#include <iostream>
using namespace std;

int main() {
    char b;

    cin >> b;

    if (b == 'A')
        cout << "T";
    else if (b == 'G')
        cout << "C";
    else if (b == 'T')
        cout << "A";
    else if ( b == 'C')
        cout << "G";

    return 0;
}

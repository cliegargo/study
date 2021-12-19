// Programming education


#include <iostream>
using namespace std;

int AB() {
    int A, B;
    cin >> A >> B;

    return (A + B);
}

int main() {
    int N;

    cin >> N;
    if (N == 1) {
        cout << "Hello World" << endl;
    } else if (N == 2) {
        int output = AB();
        cout << output << endl;
    }

    return 0;
}

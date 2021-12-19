#include <bits/stdc++.h>
using namespace std;

bool isEqual(int num1, int num2) {
    if (num1 == num2) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num1, num2;
    
    cin >> num1 >> num2;
    cout << isEqual(num1, num2) << endl;

    return 0;
}
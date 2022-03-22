// https://www.codewars.com/kata/57356c55867b9b7a60000bd7/train/cpp


#include <iostream>
using namespace std;

int basicOp(char op, int val1, int val2) {
    switch (op) {
        case '+': return val1 + val2; break;
        case '-': return val1 - val2; break;
        case '*': return val1 * val2; break;
        case '/': return val1 / val2; break;
    }

    return 0;
}

int main() {
    char op;
    int val1, val2;

    cin >> op >> val1 >> val2;
    cout << basicOp(op, val1, val2) << endl;

    return 0;
}
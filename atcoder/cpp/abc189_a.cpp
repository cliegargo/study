/*
 * You are playing the slots.
 * The result of a spin is represented by three uppercase English letters C1, C2, and C3.
 * It is considered a win when all of them are the same letter.
 * Determine whether it is a win.
*/

#include <iostream>
using namespace std;

// If the result is a win, print Won; otherwise, print Lost.

int main() {
    char C1, C2, C3;

    cin >> C1 >> C2 >> C3;

    if ((C1 == C2) && (C1 == C3))
        cout << "Won" << endl;
    else
        cout << "Lost" << endl;

    return 0;
}

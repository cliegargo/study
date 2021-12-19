// Very Very Primitive Game

#include <iostream>
using namespace std;

string who(int A, int B, int C) {
    int winner;

    if (C == 0) {
        if (A > B)
            return "Takahashi";
        else
            return "Aoki";
    } else {
        if (A < B)
            return "Aoki";
        else return "Takahashi";
    }

    return 0;
}

int main() {
    int A, B, C, X;
    cin >> A >> B >> C;

    string output = who(A, B, C);
    cout << output << endl;


    return 0;
}

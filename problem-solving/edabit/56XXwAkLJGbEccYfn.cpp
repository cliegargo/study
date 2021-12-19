#include <bits/stdc++.h>
using namespace std;

int nextEdge(int side1, int side2) {
    return ((side1 + side2) - 1);
}

int main() {
    int side1, side2;

    cin >> side1 >> side2;
    cout << nextEdge(side1, side2) << endl;
    
    return 0;
}
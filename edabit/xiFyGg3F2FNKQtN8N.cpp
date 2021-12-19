#include <bits/stdc++.h>
using namespace std;

int points(int twoPointers, int threePointers) {
    return ((twoPointers * 2) + (threePointers * 3));
}

int main() {
    int twoPointers, threePointers;

    cin >> twoPointers >> threePointers;
    cout << points(twoPointers, threePointers) << endl;

    return 0;
}
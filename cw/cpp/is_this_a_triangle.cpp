// https://www.codewars.com/kata/56606694ec01347ce800001b/train/cpp

#include <bits/stdc++.h>
using namespace std;

bool isTriangle(long int a, long int b, long int c) {
    return (a + b > c && a + c > b && b + c > a) ? true : false;
}

int main() {
    long int a, b, c;

    cin >> a >> b >> c;
    cout << a << " " << b << " " << c << endl;
    cout << isTriangle(a, b, c) << endl;

    return 0;
}
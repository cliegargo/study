/*
 * Write a C++ programme to check whether a
 * given number is a power of two or not.
 */

 #include <iostream>
 #include <math.h>
 using namespace std;

string powerofTwo(int n) {
    for (int i = 0; i < n; i++) {
        if (pow(2, i) == n)
            return "True";
        else if (pow(2, i) > n)
            break;
    }

    return "False";
}

 int main() {
     int n;
     cin >> n;

     cout << powerofTwo(n) << endl;

     return 0;
 }

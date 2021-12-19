#include <bits/stdc++.h>
using namespace std;

int convert(int hours, int minutes) {
    return ((hours * 3600) + (minutes * 60));
}

int main() {
    int hours, minutes;

    cin >> hours >> minutes;
    cout << convert(hours, minutes) << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int get_sum(int a, int b) {
    int max = a > b ? a : b;
    int min = a < b ? a : b;

    int sum = 0;
    for (int i = min; i <= max; ++i) {
        sum += i;
    }

    return sum;
}

int main() {
    int a, b;

    cin >> a >> b;
    cout << get_sum(a, b) << endl;

    return 0;
}
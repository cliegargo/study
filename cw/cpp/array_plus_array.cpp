// https://www.codewars.com/kata/5a2be17aee1aaefe2a000151/train/cpp


#include <bits/stdc++.h>
using namespace std;

int arrayPlusArray(vector<int> a, vector<int> b) {
    int sum_a = 0, sum_b = 0;

    for(int i = 0; i < a.size(); i++) {
        sum_a += a[i];
    }

    for(int j = 0; j < b.size(); j++) {
        sum_b += b[j];
    }

    return sum_a + sum_b;
}

int main() {
    int limit_a, limit_b, numbers_a, numbers_b;
    vector<int> a, b;

    cin >> limit_a;
    for(int i = 0; i < limit_a; ++i) {
        cin >> numbers_a;
        a.push_back(numbers_a);
    }

    cin >> limit_b;
    for(int i = 0; i < limit_b; ++i) {
        cin >> numbers_b;
        b.push_back(numbers_b);
    }

    cout << arrayPlusArray(a, b) << endl;

    return 0;
}
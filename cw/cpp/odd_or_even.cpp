// https://www.codewars.com/kata/5949481f86420f59480000e7/cpp

#include <bits/stdc++.h>
using namespace std;


string odd_or_even(const vector<int> &arr) {
    int sum = accumulate(arr.begin(), arr.end(),0);
    return (sum % 2 == 0) ? "even" : "odd";
}

int main() {
    int limit, numbers;
    vector<int> arr;

    cin >> limit;

    for (int i = 0; i < limit; ++i) {
        cin >> numbers;
        arr.push_back(numbers);
    }

    cout << odd_or_even(arr) << endl;



    return 0;
}
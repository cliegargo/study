// https://www.codewars.com/kata/57a2013acf1fa5bfc4000921


#include <bits/stdc++.h>
using namespace std;

double calcAverage(const vector<int>& values) {
    double sum = 0;
    for (int i = 0; i < values.size(); ++i) {
        sum += values[i];
    }

    return (sum / values.size());
}

int main() {
    int numbers, n;
    vector<int> values;

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> numbers;
        values.push_back(numbers);
    }

    cout << calcAverage(values) << endl;
}
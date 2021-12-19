// https://www.codewars.com/kata/5715eaedb436cf5606000381/train/cpp

#include <bits/stdc++.h>
using namespace std;

int positive_sum(vector<int> arr) {
    int counter = 0;
    for (auto n : arr) {
        counter = (n > 0) ? counter += n : counter += 0;
    }
    return counter;
}

int main() {
    int limit, numbers;
    vector<int> arr;

    cin >> limit;
    for (int i = 0; i < limit; ++i) {
        cin >> numbers;
        arr.push_back(numbers);
    }

    cout << positive_sum(arr) << endl;

    return 0;
}
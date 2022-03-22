// https://www.codewars.com/kata/5388f0e00b24c5635e000fc6/train/cpp

#include <bits/stdc++.h>
using namespace std;

pair<int, int> swap_values(pair<int, int> values) {
    return make_pair(values.second, values.first);
}

int main() {
    //pair<int, int> values = {1, 2};
    pair<int, int> values = {14958573, 222032399};

    pair<int, int> output = swap_values(values);
    cout << output.first << " " << output.second << endl;

    return 0;
}
// https://www.codewars.com/kata/514b92a657cdc65150000006/train/cpp


#include <bits/stdc++.h>
using namespace std;

int solution(int number) {
    int sum = 0;

    for(int i = 1; i < number; ++i) {
        if(i % 3 == 0 || i % 5 == 0) {
            sum += i;
        } else {
            sum += 0;
        }
    }
    return sum;
}

int main() {
    int number;

    cin >> number;
    cout << solution(number) << endl;

    return 0;
}
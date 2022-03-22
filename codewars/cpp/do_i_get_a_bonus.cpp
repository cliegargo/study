// https://www.codewars.com/kata/56f6ad906b88de513f000d96/train/cpp

#include <bits/stdc++.h>
using namespace std;

string bonus_time(int salary, bool bonus) {
    if (bonus == true) {
        return string("$") + to_string(salary * 10);
    } else {
        return string("$") + to_string(salary);
    }
}

int main() {
    int salary;
    bool bonus;

    cin >> salary >> bonus;
    cout << bonus_time(salary, bonus) << endl;

    return 0;
}
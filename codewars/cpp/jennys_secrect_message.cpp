// https://www.codewars.com/kata/55225023e1be1ec8bc000390/train/cpp


#include <bits/stdc++.h>
using namespace std;

string greet(string name) {
    if(name == "Johnny") {
        return "Hello, my love!";
    } else {
        return "Hello, " + name + "!";
    }
}

int main() {
    string name;

    cin >> name;
    cout << greet(name) << endl;
    
    return 0;
}
// https://www.codewars.com/kata/586c1cf4b98de0399300001d/train/cpp


#include <iostream>
using namespace std;

int combat(int health, int damage) {
    int new_health = health - damage;

    if(new_health > 0) {
        return new_health;
    } else {
        return 0;
    }
}

int main() {
    int health, damage;

    cin >> health >> damage;
    cout << combat(health, damage) << endl;

    return 0;
}
// https://www.codewars.com/kata/515e188a311df01cba000003/train/cpp


#include <bits/stdc++.h>
using namespace std;

string get_planet_name(int id) {
    switch(id) {
        case 1:
            return "Mercury";
            break;
        case 2:
            return "Venus";
            break;
        case 3:
            return "Earth";
            break;
        case 4:
            return "Mars";
            break;
        case 5:
            return "Jupiter";
            break;
        case 6:
            return "Saturn";
            break;
        case 7:
            return "Uranus";
            break;
        case 8:
            return "Neptune";
            break;
    }
    return 0;
}

int main() {
    int id;

    cin >> id;
    cout << get_planet_name(id) << endl;

    return 0;
}
// https://www.codewars.com/kata/5266876b8f4bf2da9b000362

#include <bits/stdc++.h>
using namespace std;

string likes(vector<string> &names) {
    switch(names.size()) {
        case 0:
            return "no one likes this";
            break;
        case 1:
            return names[0] + " likes this";
            break;
        case 2:
            return names[0] + " and " + names[1] + " like this";
            break;
        case 3:
            return names[0] + ", " + names[1] + " and " + names[2] + " like this";
            break;
        default:
            return names[0] + ", " + names[1] + " and " + to_string(names.size()-2) + " others like this";
            break;
    }
}

int main() {
    int limit;
    string usernames;
    vector<string> names;

    cin >> limit;

    for(int i = 0; i < limit; ++i) {
        cin >> usernames;
        names.push_back(usernames);
    }

    cout << likes(names) << endl;

    return 0;
}
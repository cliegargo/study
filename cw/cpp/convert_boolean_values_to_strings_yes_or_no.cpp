// https://www.codewars.com/kata/53369039d7ab3ac506000467/train/cpp


#include <iostream>
using namespace std;

string bool_to_word(bool value) {
    if(value == true) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    bool value;
    
    cin >> value;
    cout << bool_to_word(value) << endl;

    return 0;
}
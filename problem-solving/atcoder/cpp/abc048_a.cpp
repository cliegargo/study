// AtCoder *** Contest


#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    getline(cin, s);

    if (!s.empty()) {
        s = s[8];
        s.front() = toupper(s.front());
    }

    cout << "A" << s << "C";

    return 0;
}

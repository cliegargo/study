// https://www.codewars.com/kata/5513795bd3fafb56c200049e/solutions/cpp


#include <bits/stdc++.h>
using namespace std;

vector<int> countBy(int x, int n) {
    vector<int> count;
    for(int i = x; i <= n * x; i += x) {
        count.push_back(i);
    }
    return count;
}

int main() {
    int x, n;
    
    cin >> x >> n;
    vector<int> counted = countBy(x, n);
    copy(counted.begin(), counted.end(), ostream_iterator<int>(cout," "));
    cout << endl;

    return 0;
}
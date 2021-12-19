// https://www.codewars.com/kata/5556282156230d0e5e000089/train/cpp

#include <bits/stdc++.h>
using namespace std;

string DNAtoRNA(string dna) {
    for(int i = 0; i < dna.size(); ++i) {
        if (dna[i] == 'T') {
            dna[i] = 'U';
        }
    }
    return dna;
}

int main() {
    string dna;

    cin >> dna;
    cout << DNAtoRNA(dna) << endl;

    return 0;
}
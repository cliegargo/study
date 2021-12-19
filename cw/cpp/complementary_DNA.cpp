// https://www.codewars.com/kata/554e4a2f232cdd87d9000038/train/cpp


#include <iostream>

std::string DNAStrand(const std::string& dna) {
    std::string comp_dna;
    for(int i = 0; i < dna.size(); ++i) {
        if(dna[i] == 'A') {
            comp_dna.push_back('T');
        } else if(dna[i] == 'T') {
            comp_dna.push_back('A');
        } else if(dna[i] == 'G') {
            comp_dna.push_back('C');
        } else if(dna[i] == 'C') {
            comp_dna.push_back('G');
        }
    }

    return comp_dna;
}

int main() {
    std::string dna;

    std::cin >> dna;
    std::cout << DNAStrand(dna) << std::endl;

    return 0;
}
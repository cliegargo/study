// https://www.codewars.com/kata/5a00e05cc374cb34d100000d/train/cpp


#include <iostream>
#include <vector>
#include <iterator>

std::vector<int> reverseSeq(int n) {
    std::vector<int> seq;
    for(int i = 1; i <= n; ++i) {
        seq.push_back(i);
    }

    std::vector<int> rev;
    for(int j = seq.size(); j >= 0; --j) {
        rev.push_back(seq[j]);
    }

    rev.erase(rev.begin());
    return rev;
}

int main() {
    int n;

    std::cin >> n;
    std::vector<int> reverse = reverseSeq(n);
    copy(reverse.begin(), reverse.end(), std::ostream_iterator<int>(std::cout, " "));
    puts("\n");
    return 0;
}
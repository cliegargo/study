/*
Using names.txt (right click and 'Save Link/Target As...'), a 46K text file
containing over five-thousand first names, begin by sorting it into alphabetical
order. Then working out the alphabetical value for each name, multiply this
value by its alphabetical position in the list to obtain a name score.

For example, when the list is sorted into alphabetical order, COLIN, which is
worth 3 + 15 + 12 + 9 + 14 = 53, is the 938th name in the list. So, COLIN would
obtain a score of 938 × 53 = 49714.
What is the total of all the name scores in the file?


Answer: 871198282
Completed on Sun, 27 Mar 2022, 02:36
*/

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <map>
#include <numeric>


std::vector<std::string> read(std::string filename) {
    std::ifstream readfile(filename);
    std::vector<std::string> names;
    std::string name;

    // Delimit string with comma.
    while(getline(readfile, name, ',')) {
        // Replace quotation marks with empty char.
        std::replace(name.begin(), name.end(), '\"', '\0');
        names.push_back(name);
        name = "";
    }

    readfile.close();

    std::sort(names.begin(), names.end());

    return names;
}

unsigned long long int count_score(std::vector<std::string> sorted_names) {
    std::map<char, unsigned long long int> scores = {
        {'A', 1}, {'B', 2}, {'C', 3}, {'D', 4}, {'E', 5}, {'F', 6},
        {'G', 7}, {'H', 8}, {'I', 9}, {'J', 10}, {'K', 11}, {'L', 12},
        {'M', 13}, {'N', 14}, {'O', 15}, {'P', 16}, {'Q', 17}, {'R', 18},
        {'S', 19}, {'T', 20}, {'U', 21}, {'V', 22}, {'W', 23}, {'X', 24},
        {'Y', 25}, {'Z', 26},
    };

    unsigned long long int temp = 0;
    std::vector<unsigned long long int> count;

    for(int i = 0; i < sorted_names.size(); ++i) {
        for(auto &j : sorted_names[i]) {
            auto it = scores.find(j);
            if(it != scores.end()) {
                temp += it->second;
            }
        }
        count.push_back(temp * (i + 1));
        temp = 0;
    }

    return std::accumulate(count.begin(), count.end(), 0);
}

int main() {
    std::vector<std::string> sorted_names = read("p022_names.txt");
    std::cout << count_score(sorted_names) << '\n';

    return 0;
}
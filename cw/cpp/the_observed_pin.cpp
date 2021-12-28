#include <iostream>
#include <vector>
#include <map>

std::vector<std::string> get_pins(std::string observed) {
	std::map<char, std::vector<std::string>> adj = {
		{'1', {"1", "2", "4"}},
		{'2', {"1", "2", "3", "5"}},
		{'3', {"2", "3", "6"}},
		{'4', {"1", "4", "5", "7"}},
		{'5', {"2", "4", "5", "6", "8"}},
		{'6', {"3", "5", "6", "9"}},
		{'7', {"4", "7", "8"}},
		{'8', {"5", "7", "8", "9", "0"}},
		{'9', {"6", "8", "9"}},
		{'0', {"8", "0"}}
	};

	std::vector<std::string> possible;

	if(observed.size() == 1) {
		for(auto &i : observed) {
        	auto it = adj.find(i);
        	if(it != adj.end()) {
        		for(auto &j : it->second) {
        			possible.push_back(j);
        		}
        	}
        }
	} else {
		std::vector<std::string> a;
		std::string b;
		for(auto &i : observed) {
	    	auto it = adj.find(i);
	    	if(it != adj.end()) {
	    		for(auto &j : it->second) {
	    			b += j;
	    		}
	    		a.push_back(b);
	    		b = "";
	    	}
	    }

		for(int i = 0; i < a.size(); ++i) {
			for(int j = 0; j < a[i].size(); ++j) {
				std::cout << i << ':' << j << '\t' << a[i][j] << '\n';
			}
			putchar('\n');
		}
	}

	return {};
}

int main() {
	std::string observed;

	std::cin >> observed;
	std::vector<std::string> out = get_pins(observed);

	for(auto &i : out) {
		std::cout << i << '\t';
	}
	putchar('\n');

	return 0;
}

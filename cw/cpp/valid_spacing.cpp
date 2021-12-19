#include <iostream>
#include <string>

bool valid_spacing(const std::string& s) {
	int lead_trail = 0;
	int between = 0;

	for(int i = 0; i < s.size(); ++i) {
		if(s[0] == ' ' || s[s.size() - 1] == ' ') {
			lead_trail += 1;
		} else if(s[i] == ' ') {
			between += 1;
		}
	}

	return (lead_trail >= 1 || between % 2 != 0) ? false : true;
}

int main() {
	std::string s;

	getline(std::cin, s);
	std::cout << valid_spacing(s) << '\n';

	return 0;
}

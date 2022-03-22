// https://www.codewars.com/kata/56170e844da7c6f647000063/train/cpp


#include <iostream>

std::string people_with_age_drink(int age) {
	switch(age) {
		case 0 ... 13:
			return "drink toddy";
		case 14 ... 17:
			return "drink coke";
		case 18 ... 20:
			return "drink beer";
		default:
			return "drink whisky";
	}
}

int main() {
	int age;
	
	/*
	int age[8] = {0, 13, 14, 17, 18, 20, 21, 25};
	std::cout << sizeof(age) << '\n';
	for(int i = 0; i < sizeof(age)/sizeof(age[0]); ++i) {
		std::cout << people_with_age_drink(age[i]) << '\n';
	}
	*/

	std::cin >> age;
	std::cout << people_with_age_drink(age) << '\n';

	return 0;
}

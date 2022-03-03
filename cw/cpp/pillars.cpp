// https://www.codewars.com/kata/5bb0c58f484fcd170700063d/train/cpp


#include <iostream>

long pillars(int num_of_pillars, int distance, int width) {
	distance *= 100;

	long d = num_of_pillars - 1;
	long w = num_of_pillars - 2;

	if(num_of_pillars > 1) {
		d *= distance;
		w *= width;
	} else {
		return 0;
	}


	return d + w;
}

int main() {
	int num_of_pillars, distance, width;

	std::cin >> num_of_pillars >> distance >> width;
	std::cout << pillars(num_of_pillars, distance, width) << '\n';

	return 0;
}

// Multiples of 3 and 5

#include <stdio.h>

int main() {
	int i= 0, sum = 0;

	for (i; i < 1000; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum = sum + i;
		}
	}

	printf("%d\n", sum);

	return 0;
}

// Even Fibonacci numbers

#include <stdio.h>

#define MAX 4000000

int main() {
	int fTerm = 1, sTerm = 2, nTerm, sum = 0;

	while (fTerm < MAX) {
		if (fTerm % 2 == 0) {
			sum += fTerm;
		}

		nTerm = (fTerm + sTerm);
		fTerm = sTerm;
		sTerm = nTerm;
	}

	printf("%d\n", sum);

	return 0;
}

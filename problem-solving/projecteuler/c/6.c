// Sum square difference

#include <stdio.h>
#include <math.h>

#define MAX 100

int main() {
	int a = 0, bb = 0, i = 0;
	int x = 0, y = 0;
	int b, ab;

	for (x; x <= MAX; x++) {
		a += (pow(x, 2));
	}

	for (y; y <= MAX; y++) {
		bb = (bb + y);
		b = (pow(bb, 2));
	}

	ab = (b - a);

	printf("%d\n", ab);

	return 0;
}

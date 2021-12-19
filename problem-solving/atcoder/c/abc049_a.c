#include <stdio.h>

int main() {
	char c;

	c = getchar();
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
		print("vowel\n");
	} else {
		print("consonant\n");

	return 0;
}

/*  Collatz Sequence
    https://en.wikipedia.org/wiki/Collatz_conjecture
*/


#include <stdio.h>

int main(int argc, const char *argv[]) {
    int number, steps = 0;

    printf("Starting number: ");
    scanf("%d", &number);

    while (number != 1) {
        if (number % 2 == 0) {
            number /= 2;
            printf("%d\t", number);
        } else {
            number = number * 3 + 1; 
            printf("%d\t", number);
        } 
        steps+=1;
    }
    printf("\nTerminated after %d steps.\n", steps);
    return 0;
}
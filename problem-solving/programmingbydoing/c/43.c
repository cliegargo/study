// A Number-Guessing Game


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int random = rand() % (10 - 1 + 1) + 1;
    int guess;
    
    printf("I'm thinking of a number from 1 to 10.\nYour guess: ");
    scanf("%d", &guess);
    
    if (guess == random) {
        printf("That's right!  My secret number was %d!\n", random);
    } else {
        printf("Sorry, but I was really thinking of %d.\n", random);
    }
    
    return 0;
}
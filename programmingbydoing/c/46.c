// One Shot Hi-Lo


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int random = rand() % (100 - 1 + 1) + 1;
    int guess;
    
    printf("I'm thinking of a number between 1-100.  Try to guess it.\n> ");
    scanf("%d", &guess);
    
    if (guess == random) {
        printf("You guessed it!  What are the odds?!?\n");
    } else if (guess < random){
        printf("Sorry, you are too low.  I was thinking of %d.\n", random);
    } else if (guess > random) {
        printf("Sorry, you are too high.  I was thinking of %d.\n", random);
    }
    
    return 0;
}
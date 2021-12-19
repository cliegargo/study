// Dice


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sum = 0, counter = 1;
    
    srand(time(NULL));
    int roll_1 = rand() % (6 - 1 + 1) + 1;
    int roll_2 = rand() % (6 - 1 + 1) + 1;
    
    int array[3] = {roll_1, roll_2};
    
    printf("HERE COMES THE DICE!\n");
    
    for (int i = 0; i < 2; i++) {
        printf("Roll #%d: %d\n", counter, array[i]);
        sum += array[i];
        counter++;
    }
    
    printf("The total is %d!\n", sum);
    
    return 0;
}
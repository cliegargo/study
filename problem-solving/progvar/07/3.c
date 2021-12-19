/*
    Problem #3
    Pair of 10s
    
    Clint
*/


#include <stdio.h>


int main() {
    // 1, 5, 2, 19, 5, 6, 4
    // 1, 5, -2, 12, 5, 6, 4
    
    int numbers[] = {1, 5, -2, 12, 5, 6, 4};
    int sum = 0;
    
    for (int i = 0; i < sizeof(numbers); ++i) {
        for (int j = i; j < sizeof(numbers); ++j) {
            sum = numbers[i] + numbers[j];
            if ((sum == 10) && i != j) {
                printf("(%d, %d)", numbers[i], numbers[j]);
            }
        }
    }
    printf("\n");
    
    return 0;
}

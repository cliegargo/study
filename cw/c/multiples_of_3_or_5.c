// https://www.codewars.com/kata/514b92a657cdc65150000006/train/c


#include <stdio.h>

int solution(int number) {
    int sum = 0;

    for(int i = 0; i < number; ++i) {
        if(i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    return sum;
}

int main(void) {
    int number;

    scanf("%d", &number);
    printf("%d\n", solution(number));

    return 0;
}
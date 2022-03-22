// https://www.codewars.com/kata/50654ddff44f800200000004/train/c


#include <stdio.h>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d\n", multiply(a, b));

    return 0;
}
// https://www.codewars.com/kata/582cb0224e56e068d800003c/train/c


#include <stdio.h>

int Liters(double time) {
    return time * 0.5;
}

int main(void) {
    double time;

    scanf("%lf", &time);
    printf("%d\n", Liters(time));

    return 0;
}
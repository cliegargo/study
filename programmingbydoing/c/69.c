// Xs and Ys


#include <stdio.h>
#include <math.h>
int main(int argc, const char *argv[]) {
    printf("x\ty\n-----------------\n");

    for (float x = -10.0; x < 10.5; x+=0.5) {
        for (float y = pow(x, 1); y <= x; x+=0.25) {
            printf("%.1f\t%.1f\n", x, y);
        }
    }
    return 0;
}
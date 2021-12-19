// Counting By Halves


#include <stdio.h>

int main(int argc, const char *argv[]) {
    printf("x\n------\n");
    
    for (float i = -10.0; i < 10.5; i+=0.5) {
        printf("%.1f\n", i);
    }
    return 0;
}
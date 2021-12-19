// Trapezoids


#include <stdio.h>

int main() {
    int a, b, h, trapezoid;

    scanf("%d %d %d", &a, &b, &h);

    trapezoid = ((a + b) * h / 2);

    printf("%d\n", trapezoid);

    return 0;
}

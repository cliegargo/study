// Right Triangle Checker


#include <stdio.h>

int main() {
    int fn, sn, tn;

    printf("Enter three integers: ");

    printf("Side 1: ");
    scanf("%d", &fn);

    printf("Side 2: ");
    scanf("%d", &fn);

    while (sn < fn || sn < tn) {

        printf("Side 3: ");
        scanf("%d", &fn);
    }

    if (fn == sn || fn == tn || sn == tn) {
        printf("Your three sides are %d %d %d\nNO!  These sides do not make a right triangle!", fn, sn, tn);
    } else {
        printf("Your three sides are %d %d %d\nThese sides *do* make a right triangle.  Yippy-skippy!", fn, sn, tn);
    }

    return 0;
}

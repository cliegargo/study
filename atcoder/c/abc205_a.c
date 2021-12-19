// A - kcal


#include <stdio.h>

double get_kcal(int A, int B) {
    double kcal = (A / 100.0 * (B));

    return kcal;
}

int main(int argc, const char *argv[]) {
    int A, B;
    
    scanf("%d %d", &A, &B);
    
    double kcal = get_kcal(A, B);
    printf("%lf\n", kcal);

    return 0;
}
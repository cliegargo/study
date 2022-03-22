// https://www.codewars.com/kata/574b3b1599d8f897470018f6/train/c


#include <stdio.h>

int get_real_floor(int n) {
    return (n > 0 && n < 13) ? n - 1 : (n >= 13) ? n - 2 : n;
}

int main() {
    int n;

    scanf("%d", &n);
    printf("%d\n", get_real_floor(n));

    return 0;
}
// Between a and b ...

#include <stdio.h>

int main() {
    long long int a, b, x, sum;
    
    while (scanf("%lld %lld %lld", &a, &b, &x) != 3) {
        scanf("%lld %lld %lld", &a, &b, &x);
    }
    
    if (a % x == 0) {
        sum = (b / x - a / x + 1);
    } else {
        sum = (b / x - a / x);
    }
    
    printf("%lld\n", sum);
    
    return 0;
}
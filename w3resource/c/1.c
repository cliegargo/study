#include <stdio.h>

int triple(int x, int y) {
    if (x == y) {
        return (x * y);
    }
}

int main() {
    int x, y, sum;
    
    scanf("%d %d", &x, &y);
    
    sum = triple(x, y);
    printf("%d\n", sum);
    
    return 0;
}
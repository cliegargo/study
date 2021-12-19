#include <stdio.h>
#include <stdbool.h>

bool isTrue(int x, int y) {
    if ((x == 30) || (y == 30)) {
        return true;
    } else if ((x + y) == 30) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int x, y, sum;
    
    scanf("%d %d", &x, &y);
    
    sum = isTrue(x, y);
    printf("%d\n", sum);
    
    return 0;
}
#include <stdio.h>

int main() {
    int a, b, c, sum;
    char s[100];
    
    scanf("%d", &a);
    scanf("%d %d", &b, &c);
    scanf("%s", s);
    
    sum = (a + b + c);
    printf("%d %s\n", sum, s);
    
    return 0;
}
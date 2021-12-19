/*
    Problem #2
    Question Marks
    
    Clint
*/


#include <stdio.h>
#include <string.h>


int main() {
    char string[20];
    scanf("%[^\n]%*c", string);
    
    
    int counter = 0;
    char *str_ptr = string;
    
    while ((str_ptr = strchr(str_ptr, '?')) != NULL) {
        counter++;
        str_ptr++;
    }
    
    if (counter >= 3) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    
    return 0;
}

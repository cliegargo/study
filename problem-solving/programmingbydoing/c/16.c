// Name, Age, and Salary


#include <stdio.h>

int main() {
    char name[12];
    int age;
    double salary;

    printf("\nHello. What is your name? ");
    scanf("%s", name);

    printf("\nHi, %s! How old are you? ", name);
    scanf("%d", &age);

    printf("\nSo you're %d, eh? That's not old at all!\nHow much do you make, %s? ", age, name);
    scanf("%lf", &salary);

    printf("\n%lf! I hope that's per hour and not per year! LOL!\n", salary);

    return 0;
}

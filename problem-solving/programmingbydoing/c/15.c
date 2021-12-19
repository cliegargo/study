// the Forgetful Machine


#include <stdio.h>
#define endl "\n"

int main() {
    char firstWord[50], secondWord[50];
    int firstNumber, secondNumber;

    printf("%sGive me a word! ", endl);
    scanf("%s", firstWord);

    printf("Give me a second word!");
    scanf("%s", secondWord);

    printf("%sGreat, now your favourite number? ", endl);
    scanf("%d", &firstNumber);

    printf("Great, now your second-favourite number? ");
    scanf("%d", &secondNumber);

    printf("%sWhew! Wasn't that fun?%s", endl, endl);

    return 0;
}

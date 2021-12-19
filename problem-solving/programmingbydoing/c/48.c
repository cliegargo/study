// Enter Your PIN


#include <stdio.h>

int main() {
    int PIN = 1234, enterPIN;

    printf("WELCOME TO THE BANK OF CLINT.\nEnter your PIN: ");
    scanf("%d", &enterPIN);

    while (enterPIN != PIN) {
        printf("\nINCORRECT PIN. TRY AGAIN.\nENTER YOUR PIN: ");
        scanf("%d", &enterPIN);
    }

    printf("\nPIN ACCEPTED. YOU NOW HAVE ACCESS TO YOUR ACCOUNT.\n");

    return 0;
}

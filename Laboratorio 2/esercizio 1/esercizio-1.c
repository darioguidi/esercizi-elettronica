#include <stdio.h>
#include <string.h>

int main(void) {
    char response[8];
    int min = 0, max = 100, guess;

    printf("Pensa a un numero tra 0 e 100.\n");

    while (min <= max) { // Corretta la condizione del ciclo
        guess = (min + max) / 2;

        printf("Il tuo numero è maggiore, minore o uguale a %d? (maggiore/minore/uguale): ", guess);
        
        fgets(response, sizeof(response), stdin);
        response[strcspn(response, "\n")] = '\0';

        if (strcmp(response,"maggiore") == 0) {
            min = guess + 1; 
        } else if (strcmp(response,"minore") == 0) {
            max = guess - 1; 
        } else if (strcmp(response,"uguale") == 0) {
            printf("Ho indovinato! Il numero è %d.\n", guess);
            return 0;
        } else {
            printf("Hai sbagliato a scrivere.\n");
        }
    }

    printf("Il numero che hai pensato è %d!\n", min);
    return 0;
}

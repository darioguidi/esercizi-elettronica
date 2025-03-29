#include <stdio.h>

int main() {
    int N1, N2;
    float ris;
    char op;

    printf("Inserisci calcolo nella forma <n1> <op> <n2>\n");
    if (scanf("%d %c %d", &N1, &op, &N2) != 3) {
        printf("Errore: input non valido.\n");
        return 1;
    }

    switch (op) {
        case '+':
            ris = N1 + N2;
            printf("Risultato: %.2f\n", ris);
            break;
        case '-':
            ris = N1 - N2;
            printf("Risultato: %.2f\n", ris);
            break;
        case '*':
            ris = N1 * N2;
            printf("Risultato: %.2f\n", ris);
            break;
        case '/':
            if (N2 == 0) {
                printf("Errore: divisione per zero non consentita.\n");
            } else {
                ris = (float) N1 / N2;
                printf("Risultato: %.2f\n", ris);
            }
            break;
        default:
            printf("Errore: operatore sconosciuto.\n");
            break;
    }

    return 0;
}
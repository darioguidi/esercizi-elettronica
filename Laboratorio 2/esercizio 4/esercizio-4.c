#include <stdio.h>

#define v_legth 3

int main(void)
{
    int vett[v_legth];
    int crescente = 1;
    int prec;

    for (int i = 0; i < v_legth; i++) {
        int temp;
        printf("Inserisci il numero %d nel vettore: ", i + 1);
        scanf("%d", &temp);

        if (i == 0) {
            vett[i] = temp;
        } else {
            if (temp > prec) {
                if (crescente == 0) {
                    printf("Errore: Il vettore dovrebbe essere in ordine crescente. Riprovare.\n");
                    i--;
                    continue;
                }
            } else if (temp < prec) {
                if (crescente == 1) {
                    printf("Errore: Il vettore dovrebbe essere in ordine decrescente. Riprovare.\n");
                    i--;
                    continue;
                }
            }
            vett[i] = temp;
        }
        prec = temp;
    }

    printf("Vettore finale: ");
    for (int j = 0; j < v_legth; j++) {
        printf("%d  ", vett[j]);
    }
    printf("\n");

    return 0;
}

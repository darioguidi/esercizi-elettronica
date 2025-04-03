#include <stdio.h>

#define v_len 5

int main(void) {
    int vett[v_len];
    int vett_indici_doppioni[v_len] = {0};

    int num_elementi = 0;
    for (int i = 0; i < v_len; i++) {
        int temp;
        printf("Inserire i valori nel vettore:  ");
        scanf("%d", &temp);

        if (temp < 0) {
            break;
        }

        vett[i] = temp;
        num_elementi++;
    }

    printf("Vettore finale: ");
    for (int j = 0; j < num_elementi; j++) {
        printf("%d  ", vett[j]);
    }
    printf("\n");

    int value = 1;
    while (value > 0) {
        printf("Inserire il valore da ricercare:  ");
        scanf("%d", &value);
        
        if (value < 0) {
            break;
        }

        for (int i = 0; i < v_len; i++) {
            vett_indici_doppioni[i] = 0;
        }

        int trovato = 0;
        for (int i = 0; i < num_elementi; i++) {
            if (vett[i] == value) {
                vett_indici_doppioni[i] = 1;
                trovato = 1;
            }
        }

        if (trovato) {
            printf("Valore %d trovato ai seguenti indici: ", value);
            for (int i = 0; i < num_elementi; i++) {
                if (vett_indici_doppioni[i] == 1) {
                    printf("%d  ", i);
                }
            }
            printf("\n");
        } else {
            printf("Valore non trovato nel vettore.\n");
        }
    }

    return 0;
}

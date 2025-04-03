#include <stdio.h>

#define v_legth 3

int main(void)
{
    int v1[v_legth];
    int v2[v_legth];

    for (int i = 0; i < v_legth; i++) {
        int temp;
        printf("Inserire numero per il vettore 1:  ");
        scanf("%d", &temp);
        if ((temp % 3 == 0) && (temp > 0)) {
            v1[i] = temp;
        } else {
            printf("Hai sbagliato qualcosa, riprova \n");
            i--;
        }
    }

    for (int i = 0; i < v_legth; i++) {
        int temp;
        printf("Inserire numero per il vettore 2:  ");
        scanf("%d", &temp);
        if ((temp % 3 == 1) && (temp < 0)) {
            v2[i] = temp;
        } else {
            printf("Hai sbagliato qualcosa, riprova \n");
            i--;  
        }
    }

    printf("Vettore 1: ");
    for (int j = 0; j < v_legth; j++) {
        printf("%d  ", v1[j]);
    }
    printf("\n");

    printf("Vettore 2: ");
    for (int j = 0; j < v_legth; j++) {
        printf("%d  ", v2[j]);
    }
    printf("\n");

    return 0;
}

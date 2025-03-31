#include <stdio.h>

int main(void)
{
    int num[4];

    printf("Inserisci 4 numeri interi \n");

    for(int i=0; i<4;i++){
        int temp;
        printf("Inserisci: ");
        scanf("%d", &temp);
        if(temp<1000 && temp>=0){
            num[i]=temp;
        }else{
            printf("Numero troppo grande, valore assegnato 'zero'\n");
            num[i]=0;
            i--;
        }
    }

    int max = num[0];
    int min = num[0];

    for (int i = 1; i < 4; i++) { 
        if (num[i] > max) {
            max = num[i];
        }
        if (num[i] < min) {
            min = num[i];
        }
    }

    int max_diff;
    max_diff=max-min;
    prinf("La massima differenza è di: %d", max_diff);

}
#include <stdio.h>

int main(void)
{
    int lati[3];

    printf("Inserire la misura dei lati del triangolo\n");
    for(int i=0;i<3;i++){
        printf("Inserisci: ");

        int temp;
        scanf("%d", &temp);

        if(temp>0){
            lati[i]=temp;
        }else{
            printf("Valore non valido\n");
            i--;
        }
    }

    if (lati[0] + lati[1] > lati[2] && 
        lati[0] + lati[2] > lati[1] && 
        lati[1] + lati[2] > lati[0]) 
    {
        printf("Esiste come triangolo.\n");

        if (lati[0] == lati[1] && lati[1] == lati[2]) {
            printf("Il triangolo \x8A equilatero.\n");
        } else if (lati[0] == lati[1] || lati[0] == lati[2] || lati[1] == lati[2]) {
            printf("Il triangolo \x8A isoscele.\n");
        } else {
            printf("Il triangolo \x8A scaleno.\n");
        }
    } else {
        printf("I lati inseriti non formano un triangolo.\n");
    }
}
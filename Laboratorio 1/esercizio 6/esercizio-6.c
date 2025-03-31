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

    if(lati[1]+lati[2]>lati[3] && lati[1]+lati[3]>lati[2] && lati[3]+lati[2]>lati[1]){
        printf("Esiste come triangolo \n");

        if(lati[1]==lati[2] || lati[1]==lati[3] || lati[2]==lati[3]){
            printf("Il triangolo \x84 isoscele \n");
        }else if(lati[1]==lati[2] || lati[1]==lati[3]){
            printf("Il triangolo \x84 equilatero \n");
        }else{
            printf("Il triangolo \x84 scaleno \n");
        }
    }
}
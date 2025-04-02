#include <stdio.h>

int main(void)
{
    int vett[5];
    float media;
    int min,max, position;

    size_t vett_length = sizeof(vett) / sizeof(vett[0]); //grandezza vettore / grandezza un intero 40 byte

    for(size_t i=0; i<vett_length; i++){
        printf("Inserire valore da tastiera:  ");
        scanf("%d", &vett[i]);
    }


    min = vett[0];
    max = vett[0];
    position = 0;

    for(size_t i=0; i<vett_length; i++){
        media+=vett[i];

        if(vett[i]<min){
            min=vett[i];
            position=i;
        }else if(vett[i]>max){
            max=vett[i];
        }

        printf("%d \n", vett[i]);       
    }

    media=media/vett_length;

    printf("\nLa media sara di %.2f", media);
    printf("\nIl valore minimo è %d in posizione %d\n", min, position);
    printf("\nIl valore massimo è %d \n", max);

    return 0;
}
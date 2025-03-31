#include <stdio.h>

int main(void)
{
    int num[4];

    printF("Inserisci 4 numeri interi \n");

    for(int i=0; i<4;i++){
        printf("Inserisci: ");
        if(num[i]<1000){
            scanf("%d", num[i]);
        }else{
            printf("Numero troppo grande, riporvare \n");
            i--;
        }
    }




}
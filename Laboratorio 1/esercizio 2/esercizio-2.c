#include <stdio.h>

#define K 10

float equation(int a, int b, int c, int d)
{
    int denominatore = a+(b*c);
    if(denominatore==0){
        return -1;
    }

    return (-d * K)/denominatore;
}

int main(void)
{
    int a, b, c, d;
    float x_equation;

    printf("Inserire i valori da sostituire nell'equazione \n");
    if(scanf("%d%d%d%d", &a,&b,&c,&d) != 4){
        printf("Hai sbagliato ad inserire i valori per l'equazione \n ");
        return 1;
    }

    x_equation=equation(a,b,c,d);

    if(x_equation != -1){
        printf("Il valore di x nell'equazione sarà: %.2f \n", x_equation);
    }else{
        printf("L'equazione non ha soluzioni \n");
    }

    return 0;
}
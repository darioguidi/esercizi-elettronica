#include <stdio.h>

#define K 10

float equation(int a, int b, int c, int d)
{
    for(float i=0;i<1000;i++){
        if((a*i)+(b*c*i)+(d*K)==0){
            return i;
        }
    }
    return -1;
}

int main(void)
{
    int a, b, c, d;
    float x_equation;

    printf("Inserire i valori da sostituire nell'equazione \n");
    if(scanf("%d%d%d%d", a,b,c,d) != 4){
        printf("Hai sbagliato ad inserire i valori per l'equazione \n ");
        return 1;
    }

    if(x_equation=equation(a,b,c,d)){
        printf("Il valore di x nell'equazione sarà: %.2f", x_equation);
    }else{
        printf("L'equazione non ha soluzioni");
    }

    return 0;
}
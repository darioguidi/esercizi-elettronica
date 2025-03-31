#include <stdio.h>

int is_prime(int num)
{
    if(num<2) return 0;

    for(int i=2;i<num;i++){
        if(num%i==0) return 0;
    }
    return 1;
}

int main(void)
{
    int numero;

    printf("Inserire un numero per determinare se è un numero primo \n");
    scanf("%d", &numero);
    
    if(is_prime(numero)){
        printf("Il numero è primo");
    }else{
        printf("Non è primo");    
    }
}
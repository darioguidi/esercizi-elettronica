#include <stdio.h>

int main(void)
{
    int N1, N2;
    float risp;
    char op;

    printf("Inserisci calcolo nella forma <n1> <op> <n2>\n");
    if(scanf("%d %c %d", N1, op, N2) != 3){
        printf("Si vede che hai sbagliato qualche cosa");
        return 1;
    }

    switch(op){
        case '+':
            risp=N1+N2;
            printf("Il risultato risulta: %d", risp);
            break;
        default:
            printf("Hai sbagliato qualche cosa");
            break;
    }

    return 0;
}
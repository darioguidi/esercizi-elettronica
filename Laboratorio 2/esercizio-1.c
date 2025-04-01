#include <stdio.h>
#include <string.h>

int main(void)
{
    char response[8];
    int min = 0, max = 100, guess;

    while(min<max){

        guess=(min+max)/2;

        printf("Il tuo numero è maggiore o minore di %d:  ", guess);

        fgets(response,sizeof(response),stdin);
        response[strcspn(response,"\n")]='\0';

        if(strcmp(response,"maggiore")){
            min=guess+15;
        }else if(strcmp(response,"minore")){
            max=guess-15;
        } else if (strcmp(response, "uguale") == 0) {
            printf("Ho indovinato! Il numero è %d.\n", guess);
            return 0;
        }else{
            printf("Hai sbagliato a scrivere credo");
        }
    }
}
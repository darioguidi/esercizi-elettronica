#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LUNGHEZZA_SEQUENZA 20


void generare_sequenza_DNA(char sequenza[], int len)
{
    char basi[] = {'A','G','C','T'};

    for(int i=0;i<len;i++){
        sequenza[i]=basi[rand() % 4];
    }
    sequenza[len]='\0';
}


int found_sequence()
{

}


int main(void)
{
    // Sequenze
    char sottosequenza_DNA[5];
    char sequenza_dna[LUNGHEZZA_SEQUENZA+1];

    // Generatori di numeri random
    srand(time(NULL));

    // Genera la sequenza di DNA
    generare_sequenza_DNA(sequenza_dna, 20);
    for(int i=0;i<20;i++){
        printf("%c", sequenza_dna[i]);
    }
    printf("\n");

    // Inserire la sequenza di DNA
    printf("Inserire la sequenza da trovare \n");
    fgets(sottosequenza_DNA,sizeof(sottosequenza_DNA),stdin);
    sottosequenza_DNA[strcspn(sottosequenza_DNA,"\n")]='\0';



    return 0;

}
#include <stdio.h>

#define PREZZO_BASE 100
#define CUSTOM 40
#define MESE 20

int main(void)
{
    int price, features, months, years;
    int mesi_cellulare, total_features;

    printf("Inserire la quantità di features che si vuole aggiungere al modello e se vi è a conoscenza, anche il numero di anni per cui il cellulare è stato posseduto\n");
    if(scanf("%d%d", &features, &years)!=2){
        printf("Hai sbagliato ad inserire i dati");
        return -1;
    }

    months = (years*12)*MESE;
    features = features*CUSTOM;

    price=months+features;
    if(price>100){
        printf("Il prezzo del telefono sarà di %d", price);
    }else{
        printf("Il prezzo del telefono non supera il prezzo minimo, prezzo:%d", price);
    }

    return 0;
}
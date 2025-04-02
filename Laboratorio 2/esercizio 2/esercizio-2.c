#include <stdio.h>

int main(void)
{
    int vett[10];
    size_t vett_length = sizeof(vett);
    for(size_t i=0; i<vett_length; i++){
        int temp;
        printf("Inserire valore da tastiera:  ");
        scanf("%d", &temp);
        vett[i]=temp;
    }


    for(size_t i=0; i<vett_length; i++){
        printf("%d \n", vett[i]);       
    }

    return 0;
}
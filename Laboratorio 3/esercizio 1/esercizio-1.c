#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define frase_len 30
#define key_len 4

int main(void){
    char frase[frase_len];
    int key[key_len];
    
    printf("Inserire la frase da criptare \n");
    fgets(frase,frase_len,stdin);
    frase[strcspn(frase, "\n")]='\0';

    printf("Inserire 4 numeri pe determinare la cifratura:  ");
    for (int i = 0; i < key_len; i++) {
        scanf("%d", &key[i]);
    }


    for (int i = 0; i < strlen(frase); i++) {
        if (isalpha(frase[i])) {  // Only process alphabetic characters
            char c = tolower(frase[i]);  // Convert to lowercase for encryption
            int spostamento = key[i % key_len];  // Get the shift from the key array

            c = (c - 'a' + spostamento) % 26 + 'a';  // Encrypt the character
            frase[i] = c;  // Update the string with the encrypted character
        }
    }

    for(int i=0;i<strlen(frase);i++){
        printf("%c",frase[i]);
    }
    printf("\n");
    return 0;
}

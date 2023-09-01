#include <stdio.h>
#include <string.h>

int main () {
    char apelidos[20];

    sprintf(apelidos, "vagabundo");

    int acertou = 0;
    int enforcou = 0;

    char chutes[26];
    int tentativas = 0;

    do {

        for (int i = 0 ; i < strlen(apelidos) ; i++) {

            int achou = 0;

            for (int j = 0 ; j < tentativas ; j++) {
                
                if(chutes[j] == apelidos[i]){
                    achou = 1;
                    break;
                }
            }
            
            if(achou) {
                printf("%c ", apelidos[i]);
            } else {
                printf("_ ");
            }
            
    }

        printf("\n");

        char chute;
        printf("Qual a letra ? ")
        scanf(" %c", &chute);

        chutes[tentativas] = chute;
        tentativas++;

    } while (!acertou && !enforcou);
}
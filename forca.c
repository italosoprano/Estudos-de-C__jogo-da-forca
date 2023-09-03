#include <stdio.h>
#include <string.h>

void abertura() {
    printf("***********************\n");
    printf("*    Jogo de Forca    *\n");
    printf("***********************\n\n");
}

void chuta(char chutes[26], int tentativas) {
        char chute;
        printf("Qual a letra ? ");
        scanf(" %c", &chute);

        chutes[tentativas] = chute;
        tentativas++;
}

int main () {
    char apelidos[20];

    sprintf(apelidos, "vagabundo");

    int acertou = 0;
    int enforcou = 0;

    char chutes[26];
    int tentativas = 0;

    abertura();

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

        chuta(chutes, tentativas);

    } while (!acertou && !enforcou);
}
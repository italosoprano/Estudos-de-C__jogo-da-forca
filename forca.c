#include <stdio.h>
#include <string.h>
#include "forca.h"

char apelidos[20];
char chutes[26];
int chutesdados = 0;

void abertura() {
    printf("***********************\n");
    printf("*    Jogo de Forca    *\n");
    printf("***********************\n\n");
}

void chuta() {
        char chute;
        printf("Qual a letra ? ");
        scanf(" %c", &chute);

        chutes[chutesdados] = chute;
        chutesdados++;
}

int jachutou(char letra){
    int achou = 0;

    for(int j = 0 ; j < chutesdados ; j++) {
        if(chutes[j] == letra) {
            achou = 1;
            break;
        }
    }

    return achou;
}

void desenhaforca() {

    printf("Você já deu %d chutes\n", chutesdados);

    for(int i = 0; i < strlen(apelidos); i++) {

        if(jachutou(apelidos[i])) {
            printf("%c ", apelidos[i]);
        } else {
            printf("_ ");
        }

    }
    printf("\n");

}

void escolhepalavra() {
    FILE* f;
    
    f = fopen("palavras.txt", "r");

    fclose(f);
}

int acertou() {
    for (int i = 1 ; i < strlen(apelidos) ; i++){
        if (!jachutou(apelidos[i]))
        return 0;
    }

    return 1;
}

int enforcou() {
    int erros = 0;
    
    for(i = 0 ; i < chutesdados ; i++) {

        int existe = 0;

        for(j = 0 ; j < strlen(apelidos) ; j++){
            if(chutes[i] == apelidos[j]){
                existe = 1;
                break;
            }
        }
        if (!existe) erros++;
    }

    return erros >= 5;
}

int main () {

    abertura();
    escolhepalavra();

    do {

        desenhaforca();
        chuta();

        chutesdados++;

    } while (!acertou() && !enforcou());
}
#include <stdio.h>
#include <string.h>

    char apelidos[20];
    char chutes[26];
    int tentativas = 0;

void abertura() {
    printf("***********************\n");
    printf("*    Jogo de Forca    *\n");
    printf("***********************\n\n");
}

void chuta(char chutes[26], int* tentativas) {
        char chute;
        printf("Qual a letra ? ");
        scanf(" %c", &chute);

        chutes[(*tentativas)] = chute;
        (*tentativas)++;
}

int jachutou(char letra, char chutes, int tentativas){
    int achou = 0;

    for(int j = 0 ; j < tentativas ; j++) {
        if(chutes[j] == letra) {
            achou = 1;
            break;
        }
    }

    return achou;
}

void desenhaforca() {

    printf("Você já deu %d chutes\n", tentativas);

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
    sprintf(apelidos, "VAGABUNDO");
}

int main () {

    int acertou = 0;
    int enforcou = 0;

    abertura();
    escolhepalavra();

    do {

        desenhaforca();
        chuta();

        tentativas++;

    } while (!acertou && !enforcou);
}
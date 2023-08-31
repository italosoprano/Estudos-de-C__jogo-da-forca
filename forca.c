#include <stdio.h>
#include <string.h>

int main () {
    char apelidos[100];

    sprintf(apelidos, "vagabundo");

    int acertou = 0;
    int enforcou = 0;

    do {

        char chute;
        scanf("%c", &chute);

        for (int i = 1 ; strlen(apelidos) ; i++) {
            printf("_ ");
        }

        printf("\n");

    } while (!acertou && !enforcou);
}
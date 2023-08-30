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

        for (int i = 0 ; i < strlen(apelidos) ; i++ ){
            if (apelidos[i] == chute) {
                printf("A posição %d tem essa letra \n", i);
            }
        }

    } while (!acertou && !enforcou);
}
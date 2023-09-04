#include <stdio.h>

void somar(int numeros[10]) {
    int soma = 0;

    for(int i = 0 ; i < 10 ; i++) {
        soma += numeros[i];
    }

    printf("%d \n", soma);
}

int main () {
    int numeros[10] = {44,60,13,9,30,80,51,19,38,8};

    somar(numeros);

    return 0;
}
#include <stdio.h>

int soma(int num[3], int tam) {
    
    int total;

    for (int i = 0 ; i <  tam ; i++){
        total += num[i];
    }

    return total;
}

int main () {
    int num[3];
    num[0] = 2;
    num[1] = 5;
    num[2] = 3;

    int total = soma(num, 3);

    printf("%d", total);

    return 0;
}
#include<stdio.h>
#include<stdlib.h>      // rand

int main() {
    int i;

    printf("Gerando 10 valores aleatorios entre 0 e 50!\n\n");

    for (i = 0; i < 10; i++)
        printf("%i\t", rand() % 50);

    return 0;
}

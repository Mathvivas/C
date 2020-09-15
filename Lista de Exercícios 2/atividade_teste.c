#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int num, den, xnovo, i;
    float x, soma = 0;

    printf("Digite o numerador: ");
    scanf("%i", &num);
    printf("Digite o denominador: ");
    scanf("%i", &den);

    xnovo = num/den;
    x = (float) num/den - num/den;

    printf("%i", xnovo);
    printf("\n%f", x);

    while(x != pow(10,-6)) {
        printf("\nx = %f", x);
        soma += x;
    }

    printf("%f", soma);

    return 0;
}


/*
        Elabore um programa que
        calcule e exiba a m�dia de 2
        n�meros digitados
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, media;
    printf("Digite um numero: ");
    scanf("%f", &x);
    printf("Digite outro numero: ");
    scanf("%f", &y);
    media = (x + y) / 2;
    printf("A media resultante eh %3.1f", media);
    return 0;
}

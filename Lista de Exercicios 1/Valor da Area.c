/*
            Elabore um programa que permita a entrada de dois valores,
            x e y, troque seus valores entre si e exiba os novos
            resultados.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, aux;
    printf("Digite um numero: ");
    scanf("%f", &x);
    printf("Digite outro numero: ");
    scanf("%f", &y);
    printf("x = %2.1f\n", x);
    printf("y = %2.1f\n", y);
    aux = x;            //  Para evitar a perda do valor inicial de x
    x = y;              //  x toma o valor de y
    y = aux;            //  y toma o valor inicial de x que estava armazenado
    printf("novo x = %2.1f\n", x);
    printf("novo y = %2.1f\n", y);
    return 0;
}

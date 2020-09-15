/*
         Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 0, Soma = 0, i = 0;

    printf("[");

    while(i <= 50)
    {
        if (N % 2 == 0)
        {
            Soma = Soma + N;
            printf(" %i ", N);
            i++;
        }
        N++;

    }

    printf("]");

    printf("\n\nA soma dos primeiros 50 numeros pares eh: %i\n", Soma);
    return 0;
}

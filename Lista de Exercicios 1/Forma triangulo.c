/*
        Elabore um programa que exibe ao usu�rio se tr�s valores A, B, C
        digitados formam um tri�ngulo. Sabe-se que tr�s valores formam um
        tri�ngulo se A < B + C e B < A + C e C < A + B.
        Utilize somente uma estrutura condicional.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C;
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("\nDigite o valor de B: ");
    scanf("%d", &B);
    printf("\nDigite o valor de C: ");
    scanf("%d", &C);
    if ((A < B + C) && (B < A + C) && (C < A + B))
        printf("Os valores digitados representam um triangulo!");
    else
        printf("Os valores digitados nao representam um triangulo!");
    return 0;
}

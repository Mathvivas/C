/*
        Elabore um programa que exibe ao usuário se três valores A, B, C
        digitados formam um triângulo. Sabe-se que três valores formam um
        triângulo se A < B + C e B < A + C e C < A + B.
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

/*
            Elabore um programa que calcule quantas notas de 50, 10 e 1
            são necessárias para se pagar uma conta cujo valor será
            fornecido pelo usuário.
            Somente uma variável inteira chamda VALOR
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, c, d, u;
    printf("Digite o valor da conta a pagar: ");
    scanf("%d", &valor);
    c = valor / 50;
    d = (valor % 50) / 10;
    u = valor % 10;
    printf("Notas de 50: %d", c);
    printf("\nNotas de 10: %d", d);
    printf("\nNotas de 1: %d", u);
    return 0;
}

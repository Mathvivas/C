/*
        Fa�a um programa que leia um vetor de oito posi��es. Em seguida, leia tamb�m dois valores
        X e Y quaisquer correspondentes a duas posi��es no vetor. Seu programa dever� exibir a soma
        dos valores encontrados nas respectivas posi��es X e Y.
*/

#include<stdio.h>
#include<stdlib.h>

void ExibirVetor(int[]);
void ExibirSomaVetor(int[], int, int);

int main() {
    int v[8] ={23, 86, 53, 18, 5, 41, 74, 39};
    int x, y;

    printf("\n\nDigite um valor (0 <= x <= 7): ");
    scanf("%i", &x);

    printf("\nDigite um valor (0 <= y <= 7): ");
    scanf("%i", &y);


    ExibirVetor(v);
    ExibirSomaVetor(v, x, y);

    return 0;
}


void ExibirVetor(int v[]) {
    int i;

    printf("v[8] = [\t");
    for (i = 0; i < 8; i++)
        printf("%i\t", v[i]);

    printf("]");
}


void ExibirSomaVetor(int v[], int x, int y) {
    int soma;

    if ((x < 8) && (x > -1) && (y < 8) && (y > -1))
        printf("\nSoma = %i", (v[x] + v[y]));
    else
        printf("\nNumeros invalidos!");
}

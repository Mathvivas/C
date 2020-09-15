/*
        Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3 × 3 de
        números inteiros. Em seguida, calcule um vetor contendo três posições, em que cada posição
        deverá armazenar a soma dos números de cada coluna da matriz. Exiba na tela esse array.
*/

#include<stdio.h>
#include<stdlib.h>
#define N 3

void MostrarMatriz(int M[N][N]);
void SomaColuna(int[N][N], int[N]);
void MostrarVetor(int[N]);

int main() {
    int M[N][N];
    int v[N] = {0};
    int i, j;

    for(i = 0; i < N; i++)
        for(j = 0; j < N; j++) {
            printf("M[%i][%i] = ", i, j);
            scanf("%i", &M[i][j]);
        }

    MostrarMatriz(M);
    SomaColuna(M, v);
    MostrarVetor(v);

    return 0;
}


void MostrarMatriz(int M[N][N]) {
    int i, j;

    printf("\n\n____________________________________________________");
    printf("\n\n");

    printf("M[N][N] = \n");
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++)
            printf("\t%i ", M[i][j]);

        printf("\n");
    }
}


void SomaColuna(int M[N][N], int v[N]) {
    int i, j;

    for (j = 0; j < N; j++)
        for (i = 0; i < N; i++)
            v[j] += M[i][j];
}


void MostrarVetor(int v[N]) {
    int i;

    printf("\n\nv[N] = [ ");
    for (i = 0; i < N; i++)
        printf("%i ", v[i]);

    printf("]");
}

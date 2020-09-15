/*
        Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos valores
        maiores do que 10 ela possui.
*/

#include<stdio.h>
#include<stdlib.h>

void LerMatrizMaiorDez(int [4][4]);

int main() {
    int M[4][4] = { {5, 10, 27, 61},

                    {35, 2, 0, 0},

                    {14, 1, 9, 6},

                    {20, 46, 10, 4} };


    LerMatrizMaiorDez(M);


    return 0;
}


void LerMatrizMaiorDez(int M[4][4]) {
    int i, j;
    int n = 0;

    for(j = 0; j < 4; j++)
        for(i = 0; i < 4; i++) {
            if (M[i][j] > 10)
                n += 1;
        }
    printf("Essa Matriz possui %i numeros maiores que 10.", n);
}

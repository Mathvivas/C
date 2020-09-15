#include <stdio.h>
#include <stdlib.h>

#define N 100

// Chamada sub-rotinas
void LerMatriz(float[][N], char, int);

void MultiplicarMatriz(float[][N], float[][N], float[][N], int);

void ExibirMatriz(float[][N], char, int);

// Programa Principal
int main()
{
    int n;
    float A[N][N], B[N][N], R[N][N];  // Ao declarar,é necessário indicar os parâmetros

    printf("Digite a ordem das matrizes: ");
    scanf("%i", &n);

    LerMatriz(A, 'A', n);
    LerMatriz(B, 'B', n);
    MultiplicarMatriz(A, B, R, n);

    ExibirMatriz(R, 'R', n);
    return 0;
}


// Sub-rotinas

void LerMatriz(float M[][N], char Nome, int n) {
    printf("\n");
    int i, j;
    for (i = 0; i < n; i++)           // Linha
        for (j = 0; j < n; j++)  {   // Coluna
            printf("Digite o elemento %c[%i, %i]: \n", Nome, i, j);
            scanf("%f", &M[i][j]);
        }
}

void ExibirMatriz(float M[][N], char Nome, int n) {
    printf("\nMatriz %c: \n", Nome);
    int i, j;
    for (i = 0; i < n; i++)           // Linha
    {
        for (j = 0; j < n; j++)       // Coluna
        {
            printf("%6.2f\t", M[i][j]);

        }
    }
}

void MultiplicarMatriz(float A[][N], float B[][N], float R[][N], int n) {
    int i, j, k;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            R[i][j] = 0;
            for (k = 0; k < n; k++)
                R[i][j] += A[i][k] * B[k][j];
        }
}

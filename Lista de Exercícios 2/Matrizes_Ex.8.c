#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void MostrarMatriz(int [10][10]);

int main() {
    int i, j, M[10][10];

    for(i = 0; i < 10; i++)
        for(j = 0; j < 10; j++) {
            if (i < j)
                M[i][j] = 2 * i + 7 * j - 2;
            else if (i = j)
                M[i][j] = 3 * pow(i,2) - 1;
            else
                M[i][j] = 4 * pow(i,3) + 5 * pow(j,2) + 1;
        }

    MostrarMatriz(M[10][10]);


    return 0;
}


void MostrarMatriz(int M[10][10]) {
    int i, j;

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++)
            printf(" %i ", M[i][j]);

        printf("\n");
    }
}

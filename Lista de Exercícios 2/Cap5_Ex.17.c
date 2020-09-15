/*
         Escreva um programa que leia um número inteiro positivo N e em seguida imprima N
         linhas do chamado triângulo de Floyd:
*/

#include<stdio.h>
#include<stdlib.h>

void TrianguloFloyd(int);

int main() {
    int n;

    printf("Digite a quantidade de linhas do Triangulo de Floyd: ");
    scanf("%i", &n);

    printf("\n____________________________________________________________");

    TrianguloFloyd(n);

    return 0;
}


void TrianguloFloyd(int n) {
    int i, j, w = 0;

    printf("\n");

    for(i = 1; i <= n; i++) {
        printf("\n");
        for(j = 1; j <= i; j++) {
            w++;
            printf("%i ", w);
        }
    }
}

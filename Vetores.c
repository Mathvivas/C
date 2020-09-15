#include <stdio.h>

#include <stdlib.h>

#define MAX 100

// Resposta soma = 143

// programa principal. Não crie funções

int main()

{
    int x = 11, y = 13;

    int Lx[MAX], Ly[MAX];

// crie outras variáveis aqui

    int soma = 0;

    int i = 0;

    int n;

    int c;
// while que preenche as listas Lx e Ly

    Lx[0] = x;
    Ly[0] = y;

    while (Lx[i] >= 1)  {
        Lx[i+1] = x;
        Ly[i+1] = y;
        x = x / 2;
        y = y * 2;
        i++;
    }
    c = i;
// for que calcula a soma

    for (n = 0; n < c; n++) {
        if (!((Ly[n] % 2 == 0) && (Lx[n] % 2 == 0))) {
            soma = soma + Ly[n];
        }
    }

// mostra a resposta calculada

    printf("Soma = %i", soma);

    return 0;

}


/*
         Elabore uma função para verificar se um número é um quadrado perfeito. Um quadrado
         perfeito é um número inteiro não negativo que pode ser expresso como o quadrado de outro
         número inteiro.    Exemplos: 1, 4, 9.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void QuadradoPerfeito(int);

int main() {
    int op, qp;

    op = 1;
    while (op == 1) {
        printf("________________ O Quadrado Perfeito ________________");

        printf("\n\nDigite um valor: ");
        scanf("%i", &qp);

        QuadradoPerfeito(qp);

        printf("\n\nDeseja entrar com outro valor? (Sim : 1 ||| Nao : 0): ");
        scanf("%i", &op);

        system("cls");
    }

    return 0;
}


void QuadradoPerfeito(int qp) {
    int n;

    if (n = pow(qp,0.5))
        if (pow(n,2) == qp) {
            printf("\n\nO valor digitado (%i), eh um quadrado perfeito!", qp);
            printf("\n\n%i * %i = %i", n, n, qp);
        }
    else
        printf("\n\nO valor digitado (%i), nao eh um quadrado perfeito!", qp);
}

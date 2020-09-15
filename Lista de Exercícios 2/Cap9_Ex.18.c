/*
         Faça uma função que receba como parâmetro o valor de um ângulo em graus e calcule o
         valor do seno desse ângulo usando a sua respectiva série de Taylor:
          x é o valor do ângulo em radianos. Considere π = 3.1415926 e n variando de 0 até 5.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define n 5

int Fatorial(int);
void SerieTaylor(float);

int main() {
    float Theta, x;
    float pi = 3.1415926;
    int op;

    op = 1;
    while (op == 1) {

    printf("Digite um angulo (Graus): ");
    scanf("%f", &Theta);

    x = Theta * pi / 180;

    Fatorial(x);
    SerieTaylor(x);

    printf("\n\nDeseja digitar outro angulo (Sim : 1; Nao : 0)?: ");
    scanf("%i", &op);
    }

    return 0;
}


int Fatorial(int i) {
    int fat;

    for (fat = 1; i > 1; i--)
        fat *= i;

    return fat;
}

void SerieTaylor(float rad) {
    int i;
    float resultado = 0;

    for(i = 0; i < n; i++)
        resultado += pow(-1,i) * pow(rad,(2*i+1)) / Fatorial(2*i+1);

    printf("sen(%f) = %f", rad, resultado);
}

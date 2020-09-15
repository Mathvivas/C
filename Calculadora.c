#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float Somar (float, float);

float Subtrair (float, float);

float Multiplicar(float, float);

float Dividir(float, float);

float Raiz(float, float);

float Potencia(float, float);

float Seno(float);

float Cosseno(float);

int main () {

    int op;
    float a, b, r;

    do {
        system("cls");
        Menu();
        printf("\n\nDigite a operacao desejada: ");
        scanf("%i", &op);

        switch (op) {
        case 1:
            printf("\nSoma");
            printf("\nDigite o valor de a: ");
            scanf("%f", &a);
            printf("\nDigite o valor de b: ");
            scanf("%f", &b);
            r = Somar(a, b);
            printf("%.2f", r);
            break;

        case 2:
            printf("\nSubtrair");
            printf("\nDigite o valor de a: ");
            scanf("%f", &a);
            printf("\nDigite o valor de b: ");
            scanf("%f", &b);
            r = Subtrair(a, b);
            printf("%.2f", r);
            break;

        case 3:
            printf("\nMultiplicacao");
            printf("\nDigite o valor de a: ");
            scanf("%f", &a);
            printf("\nDigite o valor de b: ");
            scanf("%f", &b);
            r = Multiplicar(a, b);
            printf("%.2f", r);
            break;

        case 4:
            printf("\nDivisao");
            printf("\nDigite o valor de a: ");
            scanf("%f", &a);
            printf("\nDigite o valor de b: ");
            scanf("%f", &b);
            r = Dividir(a, b);
            printf("%.2f", r);
            break;

        case 5:
            printf("\nRaiz Enésima");
            printf("\nDigite o valor de a: ");
            scanf("%f", &a);
            printf("\nDigite o valor de b: ");
            scanf("%f", &b);
            r = Raiz(a, b);
            printf("%.2f", r);
            break;

        case 6:
            printf("\nPotencia");
            printf("\nDigite o valor de a: ");
            scanf("%f", &a);
            printf("\nDigite o valor de b: ");
            scanf("%f", &b);
            r = Potencia(a, b);
            printf("%.2f", r);
            break;

        case 7:
            printf("\nSeno");
            printf("\nDigite o valor de a: ");
            scanf("%f", &a);
            r = Seno(a);
            printf("%.2f", r);
            break;

        case 8:
            printf("\nCosseno");
            printf("\nDigite o valor de a: ");
            scanf("%f", &a);
            r = Cosseno(a);
            printf("%.2f", r);
            break;

        case -1:
            break;

        }
    system("PAUSE");
    }
    while(op != (-1));
    return op;

return 0;
}


float Somar(float a, float b) {
    return (a + b);
}

float Subtrair(float a, float b) {
    return (a - b);
}

float Multiplicar(float a, float b) {
    return (a * b);
}

float Dividir(float a, float b) {
    return (a / b);
}

float Raiz(float a, float b) {
    return (pow(a, 1.0 / b));
}

float Potencia(float a, float b) {
    return (pow(a, b));
}

float Seno(float a) {
    return sin(a);
}

float Cosseno(float a) {
    return cos(a);
}

void Menu()
{
    printf("\n(1)  Soma (a + b)");
    printf("\n(2)  Subtracao (a - b)");
    printf("\n(3)  Multiplicacao (a * b)");
    printf("\n(4)  Divisao (a / b)");
    printf("\n(5)  Raiz (a^(1 / b))");
    printf("\n(6)  Potencia (a^b)");
    printf("\n(7)  Seno (sin(a))");
    printf("\n(8)  Cosseno (cos(a))");
    printf("\n(-1) Sair");
}

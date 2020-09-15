#include<stdio.h>
#include<stdlib.h>

void Geometrica (int, int, int);
void Ponderada (int, int, int);
void Harmonica (int, int, int);
void Aritmetica (int, int, int);
void Menu();

int main() {
    int x, y, z, op;

    do {
        system("cls");

        printf("\nDigite o primeiro valor: ");
        scanf("%i", &x);
        printf("\nDigite o segundo valor:  ");
        scanf("%i", &y);
        printf("\nDigite o terceiro valor: ");
        scanf("%i", &z);

        Menu();

        printf("\n\nDigite a media: ");
        scanf("%i", &op);

        switch(op) {
        case 1:
            Geometrica(x, y, z);
            break;
        case 2:
            Ponderada(x, y, z);
            break;
        case 3:
            Harmonica(x, y, z);
            break;
        case 4:
            Aritmetica(x, y, z);
            break;
        case 5 ... 1000:
            printf("\nErro: Numero escolhido invalido\n");
            break;
        case -1000 ... -1:
            printf("\nErro: Numero escolhido invalido\n");
            break;
        case 0:
            break;
        }

    system("PAUSE");
    }

    while (op != 0);
        return op;

    return 0;
}


void Menu() {
    printf("________________________________________________________________________");
    printf("\n   Numero Digitado \t\t Media\n");
    printf("\n\t (1) \t \t \tGeometrica\n");
    printf("\n\t (2) \t \t \tPonderada\n");
    printf("\n\t (3) \t \t \tHarmonica\n");
    printf("\n\t (4) \t \t \tAritmetica\n");
    printf("\n\n\t (0) \t\t\t Sair\n");
    printf("________________________________________________________________________");
}


void Geometrica(int x, int y, int z) {
    float geo;

    geo = pow((x * y * z), 1/3);
    printf("\nMedia Geometrica de %i, %i, %i = %.1f\n", x, y, z, geo);
}


void Ponderada(int x, int y, int z) {
    float pon;
    int peso1, peso2, peso3;

    printf("Digite o peso do primeiro numero: ");
    scanf("%i", &peso1);
    printf("Digite o peso do segundo numero: ");
    scanf("%i", &peso2);
    printf("Digite o peso do terceiro numero: ");
    scanf("%i", &peso3);

    pon = (x * peso1 + y * peso2 + z * peso3) / (peso1 + peso2 + peso3);
    printf("\nMedia Ponderada de %i, %i, %i = %.1f\n", x, y, z, pon);
}


void Harmonica(int x, int y, int z) {
    float har;

    har = 1 / ((1/x) + (1/y) + (1/z));
    printf("\nMedia Harmonica de %i, %i, %i = %.1f\n", x, y, z, har);
}


void Aritmetica (int x, int y, int z) {
    float ari;

    ari = (x + y + z) / 3;
    printf("\nMedia Aritmetica de %i, %i, %i = %.1f\n", x, y, z, ari);
}

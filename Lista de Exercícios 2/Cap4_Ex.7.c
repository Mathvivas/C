
#include<stdio.h>
#include<stdlib.h>

void Menu();

int main() {
    float valor;
    int estado;
    float mg, sp, rj, ms;

    do {
        system("cls");

        printf("Digite o valor do produto: ");
        scanf("%f", &valor);

        Menu();

        printf("\n\n\nDigite o numero do estado de destino do produto: ");
        scanf("%i", &estado);


        switch (estado) {
        case 1:
            printf("\nEstado de destino: Minas Gerais");
            mg = (valor * 7 / 100) + valor;
            printf("\nValor Final do Produto para MG: R$ %.2f\n\n", mg);
            break;
        case 2:
            printf("\nEstado de destino: Mato Grosso do Sul");
            ms = (valor * 8 / 100) + valor;
            printf("\nValor Final do Produto para MS: R$ %.2f\n\n", ms);
            break;
        case 3:
            printf("\nEstado de destino: São Paulo");
            sp = (valor * 12 / 100) + valor;
            printf("\nPreço Final do Produto para SP: R$ %.2f\n\n", sp);
            break;
        case 4:
            printf("\nEstado de destino: Rio de Janeiro");
            rj = (valor * 15 / 100) + valor;
            printf("\nPreço Final do Produto para RJ: R$ %.2f\n\n", rj);
            break;
        case 5 ... 1000:                                //  5 <= estado <= 1000
            printf("\nErro: Estado Invalido!\n\n");
            break;
        case -1000 ... -1:                              //  -1000 <= estado <= -1
            printf("\nErro: Estado Invalido!\n\n");
            break;
        case 0:
            break;
        }

    system("PAUSE");    // Aguarda qualquer tecla ser digitada para continuar
    }

    while (estado != 0);
        return estado;

    return 0;
}


void Menu() {
    printf("____________________________________");
    printf("\n\n\tEstados \t Imposto");
    printf("\n(1)\t  MG  \t\t   7% ");
    printf("\n(2)\t  MS  \t\t   8% ");
    printf("\n(3)\t  SP  \t\t  12% ");
    printf("\n(4)\t  RJ  \t\t  15% ");
    printf("\n\n(0)\t Sair ");
    printf("\n____________________________________");
}

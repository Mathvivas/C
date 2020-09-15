/*
    1ª Faixa: mostra o primeiro algarismo do valor da resistência.
    2ª Faixa: mostra o segundo algarismo da resistência.
    3ª Faixa: mostra quantos zeros devem ser adicionados a resistência
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int R, f1, f2, f3;
    float Rc;
    printf("Digite o valor de R: ");
    scanf("%i", &R);
    while (R > 0)
    {
        f1 = R;
        f2 = 0;
        f3 = -1;
        while (f1 >= 10)
        {
            f2 = f1 % 10;
            f1 = f1 / 10;
            f3++;
        }
        printf("f1 = %i \n", f1);
        printf("f2 = %i \n", f2);
        printf("f3 = %i \n", f3);

        Rc = (10 * f1 + f2) * pow(10, f3);

        if (Rc == R)
            printf("Seu resistor existe! \n");
        else
            printf("Seu resistor não existe! \n");

        printf("Resistor mais proximo = %.0f \n", Rc);

        if (f1 == 0)
            printf("Preto \n");
        if (f1 == 1)
            printf("Marrom \n");
        if (f1 == 2)
            printf("Vermelho \n");
        if (f1 == 3)
            printf("Laranja \n");
        if (f1 == 4)
            printf("Amarelo \n");
        if (f1 == 5)
            printf("Verde \n");
        if (f1 == 6)
            printf("Azul \n");
        if (f1 == 7)
            printf("Violeta \n");
        if (f1 == 8)
            printf("Cinza \n");
        if (f1 == 9)
            printf("Branco \n");

        if (f2 == 0)
            printf("Preto \n");
        if (f2 == 1)
            printf("Marrom \n");
        if (f2 == 2)
            printf("Vermelho \n");
        if (f2 == 3)
            printf("Laranja \n");
        if (f2 == 4)
            printf("Amarelo \n");
        if (f2 == 5)
            printf("Verde \n");
        if (f2 == 6)
            printf("Azul \n");
        if (f2 == 7)
            printf("Violeta \n");
        if (f2 == 8)
            printf("Cinza \n");
        if (f2 == 9)
            printf("Branco \n");

        if (f3 == 0)
            printf("Preto \n");
        if (f3 == 1)
            printf("Marrom \n");
        if (f3 == 2)
            printf("Vermelho \n");
        if (f3 == 3)
            printf("Laranja \n");
        if (f3 == 4)
            printf("Amarelo \n");
        if (f3 == 5)
            printf("Verde \n");
        if (f3 == 6)
            printf("Azul \n");
        if (f3 == 7)
            printf("Violeta \n");
        if (f3 == 8)
            printf("Cinza \n");
        if (f3 == 9)
            printf("Branco \n");

        printf("\n Digite o valor de R: ");
        scanf("%i", &R);
    }
    return 0;
}

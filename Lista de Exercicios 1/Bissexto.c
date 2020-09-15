/*
    Elabore um programa que diga ao usuário se um ano digitado é bissexto.
    Um ano é bissexto se for divisível por 400, ou se for divisível por 4,
    mas não por 100.
*/


    //  Crtl + d = Duplica a linha

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int ano;
    printf("Digite um ano (Digite 0 para sair): ");
    scanf("%i", &ano);

    while (ano != 0)
    {
        if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0)))   //  OR = || ; AND = &&
            printf("%i eh bissexto \n", ano);
        else
            printf("%i nao eh bissexto \n", ano);
        printf("Digite um ano (Digite 0 para sair): ");
        scanf("%i", &ano);
    }
    return 0;

}

#include <stdio.h>
#include <stdlib.h>


int main()
{
    float x, y;

    printf("Digite o valor de x: ");
    scanf("%f", &x);
    printf("Digite o valor de y: ");
    scanf("%f", &y);

    printf("Maior = %.2f", (x > y)? x:y);

    return 0;
}

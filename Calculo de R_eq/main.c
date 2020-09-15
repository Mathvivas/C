#include <stdio.h>
#include <stdlib.h>

#define R1  5
int main() {
    int R2;
    float Req;
    printf("Digite a resistencia: ");
    scanf("%d", &R2);
    Req = (R1 + R2) / 2;
    printf("A Resistencia Equivalente é igual a %2.1f ohms", Req);

    return 0;
}

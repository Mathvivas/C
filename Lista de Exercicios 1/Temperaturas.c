#include <stdio.h>
#include <stdlib.h>

int main()
{
    int C, F;
    printf("Digite uma temperatura (C): ");
    scanf("%d", &C);
    F = (C * 9 / 5) + 32;
    printf("\nA resultante eh %d", F);
    return 0;
}

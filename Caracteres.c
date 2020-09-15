#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 255

// Protótipos
void LerString(char[]);
void RetirarEspacos(char[], char[]);
void InverterString(char[], char[]);

//Programa Principal
int main()
{
    char s1[MAX], s2[MAX], s3[MAX];

    printf("Digite uma palavra: ");
    scanf("%s", &s1);

    LerString(s1);
    printf("Texto: %s\n", s1);

    RetirarEspacos(s1, s2);
    printf("Texto Sem Espaços: %s\n\n", s2);

    InverterString(s1, s3);
    printf("Texto Invertido: %s\n\n", s3);

    if (strcmp(s2, s3) == 0)
        printf("Eh Palindromo\n");
    else
        printf("N eh Palindromo\n");

    return 0;
}

//Sub-Rotinas
void LerString(char s[]) {
    setbuf(stdin, 0);           // Limpa o teclado
    fgets(s, MAX, stdin);       // Leitura - Preencher o vetor com todas as MAX primeiras teclas digitadas
    if (s[ strlen(s) - 1 ] == '\n')
        s[ strlen(s) - 1 ] == '\0';
}

void RetirarEspacos(char s1[], char s2[]) {
    int i, j = 0;
    for (i = 0; i < strlen(s1); i++) {
        if ( s1[i] != ' ' )
        {
            s2[j] = s1[i];
            j++;

            // s2[j++] = s1[i];
        }
    }
}

void InverterString(char s1[], char s2[]) {
    int i, N;
    N = strlen(s1);
    for (i = N - 1; i >= 0; i--)
        s2[N - 1 - i] = s1[i];
    s2[N - 1 - i] = '\0';

}


// http://www.asciitable.com/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 255

void LerString(char[]);

int main () {
    char s1[MAX], s2[MAX];

    printf("Digite uma frase: ");
    LerString(s1);
    printf("\nTexto: %s\n", s1);

    Criptografar(s1, s2);
    printf("Criptografia: %s\n", s2);

    return 0;
}

void LerString(char s[]) {
    setbuf(stdin, 0);           // Limpa o teclado
    fgets(s, MAX, stdin);       // Leitura - Preencher o vetor com todas as MAX primeiras teclas digitadas
    if (s[ strlen(s) - 1 ] == '\n')
        s[ strlen(s) - 1 ] == '\0';
}

void Criptografar(char s1[], char s2[]) {
    int i;
    for (i = 0; i < strlen(s1); i++) {
        if (s1[i] != ' ')
            s2[i] = s1[i] + 3;
        else
            s2[i] = s1[i];

        if (s2[i] > '122')
            s2[i] = 'a' + (s2[i] - '122');

        if (s2[i] > '90')
            s2[i] = 'A' + (s2[i] - '90');
    }
}
